#include <iostream>
using namespace std;
class c_polygon {
public:
    virtual float area() {
        return 0;  }
};
class c_rectangle : public c_polygon {
public:
    float length, width;
    c_rectangle(float l, float w) {
        length = l;
        width = w;   }
    float area() 
    { 
        return length * width;
   }
};
class c_triangle : public c_polygon {
public:
    float base, height;
    c_triangle(float b, float h) {
        base = b;
        height = h;
    }
    float area() {      return 0.5 * base * height;
    }
};

int main() {
    c_polygon* poly;
    c_rectangle rect(10, 5);
    c_triangle tri(6, 4);
  poly = &rect;
    cout << "Area of rectangle: " << poly->area() << endl;
  poly = &tri;
    cout << "Area of triangle: " << poly->area() << endl;
    return 0;
}
