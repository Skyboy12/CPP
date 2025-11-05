#include <bits/stdc++.h>
using namespace std;

class Teacher{
    private:
        string id;
        string full_name;
        string department;
    public:
        friend istream operator>>(istream& input, Teacher &target){
            input.ignore();
            getline(input,target.full_name);
            string department;
            getline(input,department);
            istringstream dp(department);
            string token;
            string head = "";
            while (dp >> token) {
                head += toupper(token[0]);
            }
            target.department = head;
            return input;
        }
};