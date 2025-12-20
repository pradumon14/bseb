/*
 * ======================================================================================
 * PROJECT      : STUDENT RECORD MANAGEMENT SYSTEM
 * AUTHOR       : Pradumon Sahani
 * CLASS        : XII (BSEB)
 * SUBJECT      : Computer Science
 * FILE TYPE    : Binary File (.dat)
 * DESCRIPTION  : A console-based application to manage student records (Add, Show,
 *                Search, Modify, Delete) using C++ OOP concepts.
 * ======================================================================================
 */

#include <iostream>
#include <fstream>
#include <iomanip>  // For setw() and setprecision()
#include <cstdlib>  // For system("cls")
#include <cstdio>   // For rename() and remove()

using namespace std;

// ======================================================================================
//                              CLASS DEFINITION
// ======================================================================================

class Student {
private:
    int rollNo;
    char name[50];      // Character array for name (preferred for binary files over string)
    int classNum;
    char section;
    int marks[5];       // Array to store marks of 5 subjects
    float total;
    float perc;
    char grade;

    // Helper function to calculate Grade based on Percentage
    void calculate() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        perc = total / 5.0;

        // Grading Logic
        if (perc >= 90) grade = 'A';
        else if (perc >= 75) grade = 'B';
        else if (perc >= 60) grade = 'C';
        else if (perc >= 50) grade = 'D';
        else grade = 'F';
    }

public:
    void getData();         // Function to take input from user
    void showData() const;  // Function to display data on screen
    int getRollNo() const { return rollNo; } // Accessor to get Roll No
};

// --------------------------------------------------------------------------------------
// Function: getData()
// Description: Takes input from the user for a new student record.
// --------------------------------------------------------------------------------------
void Student::getData() {
    cout << "\n\t--- ENTER STUDENT DETAILS ---\n";
    cout << "\n\tEnter Roll Number : ";
    cin >> rollNo;
    cin.ignore(); // Clears the input buffer to prevent skipping the name input

    cout << "\tEnter Student Name: ";
    cin.getline(name, 50);

    cout << "\tEnter Class (1-12)  : ";
    cin >> classNum;

    cout << "\tEnter Section       : ";
    cin >> section;

    cout << "\n\t--- ENTER MARKS (Out of 100) ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "\tSubject " << (i + 1) << " Marks     : ";
        cin >> marks[i];
    }

    calculate(); // Internal function to compute Total, % and Grade
    cout << "\n\t[SUCCESS] Record initialized internally.\n";
}

// --------------------------------------------------------------------------------------
// Function: showData()
// Description: Formats and prints the student object data to the console.
// --------------------------------------------------------------------------------------
void Student::showData() const {
    cout << "\n\t==========================================";
    cout << "\n\t           STUDENT REPORT CARD            ";
    cout << "\n\t==========================================";
    cout << "\n\t Roll No       : " << rollNo;
    cout << "\n\t Name          : " << name;
    cout << "\n\t Class/Section : " << classNum << " - " << section;
    cout << "\n\t------------------------------------------";
    cout << "\n\t Marks Obtained:";
    for(int i=0; i<5; i++) {
        cout << "\n\t   Subject " << i+1 << "   : " << marks[i];
    }
    cout << "\n\t------------------------------------------";
    cout << "\n\t Total Marks   : " << total << " / 500";
    cout << "\n\t Percentage    : " << fixed << setprecision(2) << perc << "%";
    cout << "\n\t Final Grade   : " << grade;
    cout << "\n\t==========================================\n";
}

// ======================================================================================
//                              GLOBAL FUNCTION DECLARATIONS
// ======================================================================================
void save_record();
void display_all();
void search_record(int);
void modify_record(int);
void delete_record(int);
void intro(); // Aesthetic function for cover page

// ======================================================================================
//                                  MAIN FUNCTION
// ======================================================================================
int main() {
    int choice;
    int roll_input;

    // Display Welcome Screen
    intro(); 

    while (true) {
        // Main Menu UI
        cout << "\n\n";
        cout << "\t=============================================\n";
        cout << "\t      STUDENT RECORD MANAGEMENT SYSTEM       \n";
        cout << "\t         Created by Pradumon Sahani          \n";
        cout << "\t=============================================\n";
        cout << "\t  1. Add New Student Record\n";
        cout << "\t  2. Display All Records\n";
        cout << "\t  3. Search Record by Roll No\n";
        cout << "\t  4. Modify Existing Record\n";
        cout << "\t  5. Delete Student Record\n";
        cout << "\t  6. Exit Application\n";
        cout << "\t=============================================\n";
        cout << "\t  Select Option (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                save_record();
                break;
            case 2:
                display_all();
                break;
            case 3:
                cout << "\n\tEnter Roll Number to Search: ";
                cin >> roll_input;
                search_record(roll_input);
                break;
            case 4:
                cout << "\n\tEnter Roll Number to Modify: ";
                cin >> roll_input;
                modify_record(roll_input);
                break;
            case 5:
                cout << "\n\tEnter Roll Number to Delete: ";
                cin >> roll_input;
                delete_record(roll_input);
                break;
            case 6:
                cout << "\n\tExiting... Thank you for using the system.\n";
                return 0;
            default:
                cout << "\n\t[ERROR] Invalid Choice! Please try again.\a"; // \a is alert sound
        }
    }
    return 0;
}

// ======================================================================================
//                              FILE HANDLING FUNCTIONS
// ======================================================================================

// 1. Save (Append) a new record to file
void save_record() {
    Student st;
    ofstream outFile;
    
    // ios::app adds data to the end of file instead of overwriting
    outFile.open("student.dat", ios::binary | ios::app); 
    
    st.getData(); // Get input
    
    // Write object to file
    outFile.write(reinterpret_cast<char *> (&st), sizeof(Student));
    
    outFile.close();
    cout << "\n\t[INFO] Record Saved Successfully to 'student.dat'";
}

// 2. Read and Display all records
void display_all() {
    Student st;
    ifstream inFile;
    inFile.open("student.dat", ios::binary);
    
    if (!inFile) {
        cout << "\n\t[ERROR] File could not be opened! No records found.";
        return;
    }

    cout << "\n\tDISPLAYING ALL RECORDS...\n";
    
    // Loop continues as long as data is read successfully
    while (inFile.read(reinterpret_cast<char *> (&st), sizeof(Student))) {
        st.showData();
    }
    inFile.close();
}

// 3. Search for a specific record
void search_record(int n) {
    Student st;
    ifstream inFile;
    inFile.open("student.dat", ios::binary);
    bool found = false;

    while (inFile.read(reinterpret_cast<char *> (&st), sizeof(Student))) {
        if (st.getRollNo() == n) {
            st.showData();
            found = true;
            break; // Stop searching once found
        }
    }
    inFile.close();
    
    if (!found)
        cout << "\n\t[INFO] Student with Roll No " << n << " NOT found.";
}

// 4. Modify a specific record
void modify_record(int n) {
    bool found = false;
    Student st;
    fstream File;
    
    // Open in both IN and OUT mode to read and write same file
    File.open("student.dat", ios::binary | ios::in | ios::out);

    if (!File) {
        cout << "\n\t[ERROR] File could not be opened.";
        return;
    }

    while (!File.eof() && found == false) {
        // Save current read position
        long pos = File.tellg(); 
        
        File.read(reinterpret_cast<char *> (&st), sizeof(Student));
        
        if (st.getRollNo() == n) {
            st.showData(); // Show old data
            cout << "\n\t--- ENTER NEW DETAILS ---";
            st.getData(); // Get new data
            
            // Move pointer back to the saved position to overwrite old record
            File.seekp(pos);
            
            File.write(reinterpret_cast<char *> (&st), sizeof(Student));
            cout << "\n\t[SUCCESS] Record Updated.";
            found = true;
        }
    }
    File.close();
    
    if (!found)
        cout << "\n\t[INFO] Record Not Found.";
}

// 5. Delete a specific record
void delete_record(int n) {
    Student st;
    ifstream inFile;
    ofstream outFile;
    
    inFile.open("student.dat", ios::binary);
    if (!inFile) {
        cout << "\n\t[ERROR] File could not be opened.";
        return;
    }
    
    // Create a temporary file
    outFile.open("temp.dat", ios::binary);
    
    bool found = false;
    
    // Copy all records EXCEPT the one to be deleted
    while (inFile.read(reinterpret_cast<char *> (&st), sizeof(Student))) {
        if (st.getRollNo() != n) {
            outFile.write(reinterpret_cast<char *> (&st), sizeof(Student));
        } else {
            found = true; // Mark that we found and skipped the record
        }
    }
    
    inFile.close();
    outFile.close();
    
    // Delete old file and rename temp file
    remove("student.dat");
    rename("temp.dat", "student.dat");
    
    if (found)
        cout << "\n\t[SUCCESS] Record Deleted Successfully.";
    else
        cout << "\n\t[INFO] Record not found. Nothing deleted.";
}

// Aesthetic Cover Page Function
void intro() {
    cout << "\n\n\n";
    cout << "\t=============================================\n";
    cout << "\t                                             \n";
    cout << "\t   COMPUTER SCIENCE PROJECT (CLASS XII)      \n";
    cout << "\t                                             \n";
    cout << "\t   STUDENT RECORD MANAGEMENT SYSTEM          \n";
    cout << "\t                                             \n";
    cout << "\t=============================================\n";
    cout << "\t   DEVELOPED BY: Pradumon Sahani             \n";
    cout << "\t   BOARD       : BSEB                        \n";
    cout << "\t=============================================\n";
    cout << "\n\t   Press Enter to Continue...";
    cin.ignore();
    cin.get(); 
}
