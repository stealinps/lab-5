#include <iostream>
using namespace std;
int main() {
    int firstnum, secondnum, sumeven = 0, sumsquare = 0;
    cout << "enter first number and second number (first nummber must be smaller than second number) ";
        cin >> firstnum >> secondnum;

    for (int i = firstnum; i < secondnum; i++) {
        if (i % 2 == 1)
            cout << i<<" ";
        else {
            sumeven = sumeven + i;
            cout << sumeven<<" ";
            sumsquare = sumsquare + sumeven * sumeven;
            cout << sumsquare << " ";
        }
    }
}
