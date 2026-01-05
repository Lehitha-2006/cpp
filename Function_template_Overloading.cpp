#include <iostream>
using namespace std;

template <class T>
void display(T a) {   // Template function
    cout << "Template: " << a << endl;
}

void display(int a) {  // Non-template overloaded function
    cout << "Non-template: " << a << endl;
}

int main() {
    display(10);     // Calls non-template version
    display(5.5);    // Calls template version
    return 0;
}
