// p11_array_of_structures_student.cpp
// Manage student records using an array of structures
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s[2]; // Array of 2 students

    for(int i=0; i<2; i++) {
        cout << "Enter ID, Name, Marks for student " << i+1 << ": ";
        cin >> s[i].id >> s[i].name >> s[i].marks;
    }

    cout << "\n--- Student List ---\n";
    for(int i=0; i<2; i++) {
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].marks << endl;
    }
    return 0;
}
