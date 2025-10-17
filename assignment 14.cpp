#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string Name;
    int Rollno;
    string Course;

    Student(string n, int r, string c) {
        Name = n;
        Rollno = r;
        Course = c;
    }

    void displayStudentDetails() const {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};
class Test : virtual public Student {
public:
    int marks1, marks2, marks3;

    Test(string n, int r, string c, int m1, int m2, int m3)
        : Student(n, r, c) {
    marks1 = m1;
        marks2 = m2;
      marks3 = m3;
    }
 void displayTestMarks() const {
        cout << "Subject 1 Marks: " << marks1 << endl;
        cout << "Subject 2 Marks: " << marks2 << endl;
        cout << "Subject 3 Marks: " << marks3 << endl;
    }
};

class GraceMarks : virtual public Student {
public:
    int BonusMark;

    GraceMarks(string n, int r, string c, int bonus)
        : Student(n, r, c) {
        BonusMark = bonus;
    }

    void displayGraceMarks() const {
        cout << "Bonus Mark: " << BonusMark << endl;
   }
};

class Result : public Test, public GraceMarks {
private:
   int TotalMarks;

public:
    Result(string n, int r, string c, int m1, int m2, int m3, int bonus)
        : Student(n, r, c), Test(n, r, c, m1, m2, m3), GraceMarks(n, r, c, bonus) {
       TotalMarks = m1 + m2 + m3 + bonus;
    }
    void calculateAndDisplayTotal() const {
        cout << "TOTAL MARKS: " << TotalMarks << endl;
    }

   void displayAllDetails() const {
        cout << "Final Result Details" << endl;
        displayStudentDetails();
      displayTestMarks();
        displayGraceMarks();
       calculateAndDisplayTotal();
    }
};

int main() {
    Result studentResult("sahal", 101, "CS", 75, 85, 90, 5);
    
    studentResult.displayAllDetails();

    return 0;
}
