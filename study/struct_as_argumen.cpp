#include <iostream>

using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car &car) {
    // cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}

void paintCar(Car &car, string color) {
    car.color = color;
}

int main()
{
    Car car1;
    car1.model = "Avanza";
    car1.year = 1999;
    car1.color = "Red";

    cout << &car1 << endl;
    paintCar(car1, "Blue");
    printCar(car1);

    return 0;
}