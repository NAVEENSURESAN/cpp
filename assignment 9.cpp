#include <iostream>
using namespace std;

class Matrix {
private:
   int mat[2][2];

public:
    void input() {
        cout << "Enter 4 elements of a 2x2 matrix: \n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
           }
      }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;  }
    }

    Matrix operator+(const Matrix& other) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.mat[i][j] = mat[i][j] + other.mat[i][j];
     
        }
       }
        return temp;
   }
};

int main() {
    Matrix m1, m2, result;
    cout << "Enter values for Matrix 1:\n";
    m1.input();
    cout << "Enter values for Matrix 2:\n";
    m2.input();
    result = m1 + m2;
    cout << "\nMatrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    cout << "Sum of matrices:\n";
    result.display();

    return 0;
}
