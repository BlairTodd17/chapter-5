#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string townName, fileName;
    cout << "Enter the name of the town: ";
    getline(cin, townName);
    cout << "Enter the name of the data file: ";
    cin >> fileName;

    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error opening file. Make sure " << fileName << " is in the project directory.\n";
        return 1;
    }

    cout << townName << " Population Growth\n";
    cout << "(each * represents 1,000 people)\n";

    int year, population;
    while (inputFile >> year >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; ++i) {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close();
    return 0;
}
