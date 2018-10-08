#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int size;
    cin >> size;
    while (size<1 || size>1000) {
        cout << "failed at condition \"0 <= size <= 1000\"" << endl;
        cin >> size;
    }
    int array[size];
    for (int i=0; i<size; i++) {
        cin >> array[i]; 
        if (array[i] < 1 || array[i] > 10000) {
            cout << "element must be in range from 1 to 10000" << endl; 
            exit(0);
        }
    }
    for (int j=size-1; j>-1; j--) {
        cout << array[j] << " ";
    }
        cout << endl;
}