#include <iostream>
using namespace std;


float area(float r) {
    return 3.14 * r * r;
}

int area(int side) {
    return side * side;
}


float area(float l, float w) {
    return l * w;
}


float area(int b, int h) {
    return 0.5 * b * h;
}

int main() {
    float radius, length, width;
    int side, base, height;

    cout << "Circle radius: ";
    cin >> radius;
    cout << "Circle area: " << area(radius) << endl;

    cout << "Square side: ";
    cin >> side;
    cout << "Square area: " << area(side) << endl;

    cout << "Rectangle length and width: ";
    cin >> length >> width;
    cout << "Rectangle area: " << area(length, width) << endl;

    cout << "Triangle base and height: ";
    cin >> base >> height;
    cout << "Triangle area: " << area(base, height) << endl;

    return 0;
}
