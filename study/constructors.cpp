#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int age;
        double gpa;

    // Student(string name, int age, double gpa) {
    //     this->name = name;
    //     this->age = age;
    //     this->gpa = gpa;
    // };

    // if the parameter name is different with variable name
    // we can delete the keyword "this->" 
    Student(string x, int y, double z) {
        name = x;
        age = y;
        gpa = z;
    };
};

int main() {
    // counstructor = a special method that's automaticcally called when an object is
    //                instantiated useful for assigning values to attributes as arguments

    Student student1("Arman", 18, 3.80);

    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;

    return 0;
}