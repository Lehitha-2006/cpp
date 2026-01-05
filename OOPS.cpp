#include <iostream>
using namespace std;


class Student {
public:
   
    string name;
    int marks;

    
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
   
    Student s1;

    
    s1.name = "Lehitha";
    s1.marks = 80;

    
    s1.displayInfo();

    return 0;
}

