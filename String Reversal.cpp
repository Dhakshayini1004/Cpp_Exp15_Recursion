/*
Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/
#include <iostream>
#include <string>
using namespace std;

string reverse(string str,int index) {
    if(index < 0){ // Base Case
        return " ";
    }
    else{         // Recursive Call
        return str[index] + reverse(str, index - 1);
    }
}

int main() {
    string str;
    cout << "Enter a word or sentence: "<<"\t";
    cin >> str;

    int length = str.length();
    // Function Call
    string str_new = reverse(str,length - 1);
    cout<<"Reversed string :"<<str_new<<"\n";

    return 0;
}

/*
Sample Output : 
Enter a word or sentence : habitat
Reversed string : tatibah
*/
