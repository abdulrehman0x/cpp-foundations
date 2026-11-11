#include <iostream>
using namespace std;

int main() {
    int num[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num[i];
    }

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - 1 - i; j++) {
            if(num[j] < num[j + 1]) {
                swap(num[j], num[j + 1]);
            }
        }
    }

    cout << "Sorted: ";
    for(int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
