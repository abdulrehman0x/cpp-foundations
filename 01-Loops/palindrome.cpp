#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int orignal_no = n;
    int rev = 0;
    while(n>0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if( rev == orignal_no){
        cout << orignal_no << " is a Palindrome! ";
    }
    else{
        cout << "Not a Palindrome!";
    }
}
