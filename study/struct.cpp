#include <iostream>

using namespace std;

struct student {
    string name;
    double gpa;
    bool enrolled;
};

int main() {
    // struct = a structure that group related variables under one name
    // can contain different data type

    student student1;
    student1.name = "Arman";
    student1.gpa = 3.3;
    student1.enrolled = true;
    
    student student2;
    student2.name = "Rafardhan";
    student2.gpa = 3.5;
    student2.enrolled = true;

    cout << student1.name << " " << student1.gpa << " " << student1.enrolled << endl;
    cout << student2.name << " " << student2.gpa << " " << student2.enrolled << endl;

    return 0;
}
