/*
Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/
#include <iostream>
#include <string>
using namespace std;

void num_reverse(int num) {
    if(num > 0){
        cout << num % 10;
        num_reverse(num/10);
    }
}

int main() {
    int number;
    cout<<"Enter a number :"<<"\t";
    cin>>number;


    // Function call
    cout<<"Reversed Number : "<<"\t";
    num_reverse(number);

    return 0;
}

/*
Sample Output : 
Enter a number :    2342525
Reversed Number :   5252432
*/



