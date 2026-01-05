#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> student;
    student[1] = "Lehitha";
    student[2] = "Gowri";
    student[3] = "Husna";
    student[4] = "Likitha";

    cout << "The map elements are: " << endl;
    for (auto it = student.begin(); it != student.end(); ++it)
        cout << it->first << " -> " << it->second << endl;

    // to find the key
    int key = 3;
    auto it = student.find(key);

    if (it != student.end())
    {
        cout << "\nFound: " << it->first << " -> " << it->second << endl;
    }
    else
    {
        cout << "\nKey " << key << " not found" << endl;
    }

    // erase key 2
    student.erase(2);

    cout << "\nAfter erasing key 2:" << endl;
    for (auto &pair : student)
        cout << pair.first << " -> " << pair.second << endl;

    return 0;
}

