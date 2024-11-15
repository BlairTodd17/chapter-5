#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncrease;
    int days;

    
    do {
        cout << "Enter the starting number of organisms (must be at least 2): ";
        cin >> startingPopulation;
    } while (startingPopulation < 2);

   
    do {
        cout << "Enter the average daily population increase (as a percentage, must be non-negative): ";
        cin >> dailyIncrease;
    } while (dailyIncrease < 0);

    do {
        cout << "Enter the number of days they will multiply (must be at least 1): ";
        cin >> days;
    } while (days < 1);

    cout << fixed << setprecision(2);
    cout << "Day\tPopulation Size\n";
    cout << "--------------------------\n";

    
    for (int i = 1; i <= days; ++i) {
        cout << i << "\t" << startingPopulation << endl;
        startingPopulation += static_cast<int>(startingPopulation * (dailyIncrease / 100));
    }

    return 0;
}
