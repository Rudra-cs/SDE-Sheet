#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int length) {
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = length - 1;
    cout << "Before" << endl;
    printArray(arr, length);

    while (i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "After" << endl;
    printArray(arr, length);

    return 0;
}
