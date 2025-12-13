#include <iostream>
using namespace std;
int main() {
    int n, numbers[20], pos=0, neg=0, zero=0;
    cout << "Please enter 20 integers\n";
    for (n = 0; n < 20; n++) {
        cin >> numbers[n];
        if (numbers[n] > 0)
            pos++;
        else if (numbers[n] < 0)
            neg++;
        else
            zero++;
    }
    cout << "Numbers you entered is:\n";
    for (n = 0; n < 20; n++) {
        cout << numbers[n]<<" ";
    }
    cout << "\nTotal positive number is " << pos;
    cout << "\nTotal negative number is " << neg;
    cout << "\nTotal zero number is " << zero;
}
