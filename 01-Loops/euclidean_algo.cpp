#include <iostream>
using namespace std;

int main(){
    int a,b, remainder;
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;

    while(b != 0){
        int remainder = a%b;
        a = b;
        b = remainder;
    }
    cout << "The Greatest Common Divisor is: " << a << endl;
}
