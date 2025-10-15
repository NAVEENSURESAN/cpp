#include <iostream>
using namespace std;

// Inline functions to calculate areas
inline float circleArea(float r) {
    return 3.14f * r * r;
}

inline float squareArea(float s) {
    return s * s;
}

inline float rectangleArea(float l, float w) {
    return l * w;
}

inline float triangleArea(float b, float h) {
    return 0.5f * b * h;
}

int main() {
    float radius, side, length, width, base, height;

    cout << "Circle radius: ";
    cin >> radius;
    cout << "Area of circle: " << circleArea(radius) << endl;

    cout << "Square side: ";
    cin >> side;
    cout << "Area of square: " << squareArea(side) << endl;

    cout << "Rectangle length and width: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << rectangleArea(length, width) << endl;

    cout << "Triangle base and height: ";
    cin >> base >> height;
    cout << "Area of triangle: " << triangleArea(base, height) << endl;

    return 0;
}
