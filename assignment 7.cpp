#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    friend Time addTime(Time t1, Time t2);
};

Time addTime(Time t1, Time t2) {
    Time result;
    
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.seconds = result.seconds % 60;
    
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.minutes = result.minutes % 60;

    return result;
}

int main() {
    Time t1, t2, sum;

    cout << "Enter first time:\n";
    t1.inputTime();

    cout << "\nEnter second time:\n";
    t2.inputTime();

    sum = addTime(t1, t2);

    cout << "\nFirst time: ";
    t1.displayTime();

    cout << "Second time: ";
    t2.displayTime();

    cout << "Sum of times: ";
    sum.displayTime();

    return 0;
}
