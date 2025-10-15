#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle() {       
        length = 0;
        width = 0;
    }

    Rectangle(int l, int w) {   
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
};

int main() {
    Rectangle r1;         
    Rectangle r2(7, 4);    

    r1.display();
    r2.display();

    return 0;
}
