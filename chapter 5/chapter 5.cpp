#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    if (!inputFile) {
        cerr << "Error opening file. Make sure LineUp.txt is in the project directory.\n";
        return 1;
    }

    vector<string> students;
    string name;

   
    while (getline(inputFile, name)) {
        if (!name.empty()) {
            students.push_back(name);
        }
    }

    inputFile.close();

    if (students.empty()) {
        cout << "No students found in file.\n";
        return 1;
    }

    
    sort(students.begin(), students.end());

    cout << "Number of students in the class: " << students.size() << endl;
    cout << "Student at the front of the line: " << students.front() << endl;
    cout << "Student at the end of the line: " << students.back() << endl;

    return 0;
}
