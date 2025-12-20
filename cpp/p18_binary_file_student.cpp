// p18_binary_file_student.cpp
// Binary file operations (Create, Display, Modify)
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[20]; // Use char array for binary compatibility
};

void writeRecord() {
    Student s = {1, "Alice"};
    ofstream fout("data.dat", ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();
    cout << "Record written.\n";
}

void readRecord() {
    Student s;
    ifstream fin("data.dat", ios::binary);
    if(fin.read((char*)&s, sizeof(s)))
        cout << "Read: " << s.id << " " << s.name << endl;
    fin.close();
}

int main() {
    writeRecord();
    readRecord();
    return 0;
}
