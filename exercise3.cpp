#include <iostream>
using namespace std;
int main() {
    int floorN = 0, occupiedN, roomN, totalRoom = 0, totalOccupied = 0;
    cout << "How many floor is the hotel:";
    cin >> floorN;
    int n = 0;
    while (n < floorN) {
        cout << "How many rooms in the "<<(n+1)<< " floor :";
        cin >> roomN;
        cout << "How many rooms is occupied :";
        cin >> occupiedN;
        while (occupiedN > roomN) {
            cout << "How many rooms in the " << (n + 1) << " floor :";
            cin >> roomN;
            cout << "How many rooms is occupied :";
            cin >> occupiedN;
        }
        totalRoom = totalRoom + roomN;
        totalOccupied = totalOccupied + occupiedN;
        n++;
    }
    double percentOccupied = (double)totalOccupied / totalRoom * 100;
        cout << "Percentage of room occupied is " << percentOccupied;
}
