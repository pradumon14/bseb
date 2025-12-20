// p12_array_of_objects_employee.cpp
// Manage employee records using a Class and array of objects
#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void getDetails() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }
    void showDetails() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main() {
    Employee emp[2];

    for(int i=0; i<2; i++) emp[i].getDetails();
    
    cout << "\n--- Employee Data ---\n";
    for(int i=0; i<2; i++) emp[i].showDetails();

    return 0;
}
