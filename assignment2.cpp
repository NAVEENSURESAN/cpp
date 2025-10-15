#include <iostream>
using namespace std;

class Book {
    string BookID;
    string BookName;
    float BookPrice;

    float total_cost(int n) {
        return BookPrice * n;
    }

public:
    void inputDetails() {
        cout << "Book ID: ";
        cin >> BookID;
        cout << "Book Name: ";
        cin >> BookName;
        cout << "Book Price: ";
        cin >> BookPrice;
    }

    void displayDetails() {
        cout << "Book ID: " << BookID << endl;
        cout << "Book Name: " << BookName << endl;
        cout << "Book Price: " << BookPrice << endl;
    }

    void buyCopies() {
        int copies;
        cout << "Number of copies: ";
        cin >> copies;
        cout << "Total Cost: " << total_cost(copies) << endl;
    }
};

int main() {
    Book book1, book2, book3;

    cout << "Enter details for Book 1:" << endl;
    book1.inputDetails();

    cout << "\nEnter details for Book 2:" << endl;
    book2.inputDetails();

    cout << "\nEnter details for Book 3:" << endl;
    book3.inputDetails();

    cout << "\nBook 1:" << endl;
    book1.displayDetails();
    book1.buyCopies();

    cout << "\nBook 2:" << endl;
    book2.displayDetails();
    book2.buyCopies();

    cout << "\nBook 3:" << endl;
    book3.displayDetails();
    book3.buyCopies();

    return 0;
}
