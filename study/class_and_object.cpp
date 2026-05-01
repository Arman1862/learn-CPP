#include <iostream>

using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat() {
            cout << name << ", This person is eating\n";
        }

        void drink() {
            cout << name << ", This person is drinking\n";
        }

        void sleep() {
            cout << name << ", This person is sleeping\n";
        }
};

int main() {
    // object = a collection of attributes and methods
    // can be used to mimic real world item (phone, book, etx)
    // created from class which acts as a blue-print

    Human human1;

    human1.name = "Arman";
    human1.occupation = "Programmer";
    human1.age = 17;

    cout << human1.name << endl;
    cout << human1.occupation << endl;
    cout << human1.age << endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}