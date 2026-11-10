#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int num[50], largest = 0, index = 0;
    for(int i = 0; i < 50; i++){
        num[i] = rand() % 10 + 1;
        if(num[i] > largest){
            largest = num[i];
            index = i;
        }
    }
    cout <<"Largest: "<< largest << endl << index;
}
