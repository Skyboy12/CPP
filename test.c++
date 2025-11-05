#include <bits/stdc++.h>

using namespace std;

class Person{
    protected:
        string id;
        string first_name, last_name, username;
        string password;
    public:
        string get_id(){
            return id;
        }
};

class Student: public Person{
    protected:
        string student_id;
        string class_name;
        double gpa;
    public:
        void show_id(){
            cout << id << " " << student_id << endl;
        }
        void change_id(string student_id, string id){
            this->id = id;
            this->student_id = student_id;
        }
};

class Teacher: public Person{
    protected:
        string teacher_id;
        string department;
    public:
        void show_id(){
            cout << id << " " << teacher_id << endl;
        }
        void change_id(string teacher_id, string id){
            this->id = id;
            this->teacher_id = teacher_id;
        }
};