#include <bits/stdc++.h>
using namespace std;

struct Subject{
    string id, name;
    int credits;
    float cc, kt, thi;
};
struct Student{
    string id, name, class_name;
    int subject_count;
    float gpa;
    vector<Subject> subjects;
};

void calculate_gpa(Student &s){
    float total_credits = 0, total_score = 0;
    for (Subject sub : s.subjects){
        total_credits += sub.credits;
        float score = sub.cc * 0.1 + sub.kt * 0.2 + sub.thi * 0.7;
        total_score += score * sub.credits;
    }
    s.gpa = (total_score / total_credits) * 0.4;
}

int main(){
    ifstream file_in("PTIT.inp");
    ofstream file_out("PTIT.out");
    int n; file_in >> n;
    vector<Subject> subjects(n);
    for (int i = 0; i < n; i++){
        file_in >> subjects[i].id;
        file_in.ignore();
        getline(file_in, subjects[i].name);
        file_in >> subjects[i].credits >> subjects[i].cc >> subjects[i].kt >> subjects[i].thi;
    }
    int m; file_in >> m;
    vector<Student> students(m);
    for (int i = 0; i < m; i++){
        file_in >> students[i].id;
        file_in.ignore();
        getline(file_in, students[i].name);
        file_in >> students[i].class_name >> students[i].subject_count;
        for (int j = 0; j < students[i].subject_count; j++){
            string sub_id; file_in >> sub_id;
            auto it = find_if(subjects.begin(), subjects.end(), [&](Subject sub){ return sub.id == sub_id; });
            if (it != subjects.end()){
                students[i].subjects.push_back(*it);
            }
        }
        calculate_gpa(students[i]);
    }
    for (const Student &s : students){
        if (s.gpa >= 2.8){
            file_out << s.id << " " << s.name << " " << s.class_name << " ";
            file_out << fixed << setprecision(2) << s.gpa << "\n";
        }
    }
}