#include <iostream>
using namespace std;

int main(){
    int num[5];
    int sum = 0;

    for(int i = 0; i < 5; i++){
        cout << "Enter value " << i+1 << " :";
        cin >> num[i];
    }
    int minimum = num[0]; int maximum = num[0];
    for(int i = 0; i < 5; i++){
        if(num[i] > maximum){
            maximum = num[i];
        }
        if(num[i] < minimum){
            minimum = num[i];
        }
        sum = sum + num[i];
    }
    double avg = (double) sum / 5;
    cout << "Maximum value is " << maximum << "\nMinimum value is " << minimum << "\nAverage is " << avg;
    return 0;
}
