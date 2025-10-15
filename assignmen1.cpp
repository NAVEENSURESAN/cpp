#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Method to read data from the user
    void readData() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter car year: ";
        cin >> year;
    }

    // Method to display car details
    void displayData() const {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:" << endl;
    car1.readData();

    cout << "\nEnter details for Car 2:" << endl;
    car2.readData();

    cout << "\nEnter details for Car 3:" << endl;
    car3.readData();

    cout << "\nDetails of Car 1:" << endl;
    car1.displayData();

    cout << "Details of Car 2:" << endl;
    car2.displayData();

    cout << "Details of Car 3:" << endl;
    car3.displayData();

    return 0;
}
