#include <iostream>
using namespace std;

int main(){
    int num[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter element: " << i + 1 << " : ";
        cin >> num[i];
    }
    int key; int count = 0;
    cout << "Enter the number that you want to find: ";
    cin >> key;
    for(int i = 0; i < 5; i++){
        if(num[i] == key){
            count++;
        }
    }
    cout << key << " appears " << count << " times" << endl;
    return 0;
}
