#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;
    int gcd;

    for(int i = 1; i <= a && i <= b; i++){
        if(a%i == 0 && b % i == 0){
            gcd = i;
        }
    }
    cout << "The GCD of: " << a << " and " << b << " is = " << gcd;
    return 0;
}
