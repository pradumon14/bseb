// p19_text_file_operations.cpp
// Basic Text File I/O
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;
    
    // Write
    file.open("test.txt", ios::out);
    file << "Hello C++ File Handling";
    file.close();

    // Append
    file.open("test.txt", ios::app);
    file << "\nNew Line Added";
    file.close();

    // Read
    string line;
    file.open("test.txt", ios::in);
    cout << "File Content:\n";
    while(getline(file, line)) {
        cout << line << endl;
    }
    file.close();

    return 0;
}
