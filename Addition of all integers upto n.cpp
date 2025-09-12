#include <iostream>
using namespace std;

int sumup(int n) {
    if (n < 0) {
        cout << "Error: Sum is not defined for negative numbers." << endl;
        return 0;  // return 0 for invalid input
    }
    if (n <= 1)
        return 1;
    else
        return (n + sumup(n - 1));  // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = sumup(num);
    if (num >= 0) {
        cout << "Sum of numbers from 1 to " << num << " is " << result << endl;
    }

    return 0;
}

/*
Sample Output: 
Enter a number: 6
Sum of numbers from 1 to 6 is 21

Enter a number: -3
Error: Sum is not defined for negative numbers.
*/
