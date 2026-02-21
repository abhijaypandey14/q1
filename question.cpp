#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    void getdata() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displaydata() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.getdata();

    cout << "\nEnter details for Student 2:\n";
    s2.getdata();

    cout << "\nDisplaying Student Details:\n";
    s1.displaydata();
    s2.displaydata();

    return 0;
}
