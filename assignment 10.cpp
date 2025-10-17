#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        std::cout << "--- Person Details ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl; }
};

class Student : public Person {
public:
    int roll_number;
 Student(std::string n, int a, int roll) : Person(n, a) {
        roll_number = roll;
    }
    void showDetails() {
        std::cout << "--- Student Details ---" << std::endl;
        std::cout << "Roll Number: " << roll_number << std::endl; }
};

int main() {
    Student myStudent("achuth", 19, 45);
  std::cout << "Demonstrating Single Inheritance:" << std::endl;
    std::cout << "=================================" << std::endl;

    myStudent.display();
    myStudent.showDetails();

    return 0;
}
