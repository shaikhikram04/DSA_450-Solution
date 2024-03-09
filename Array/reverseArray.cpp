#include<iostream>
using namespace std;

//! T.C -> O(n)
//! S.C -> O(1)

//* Using 2 Pointer
void reverseArray(int arr[], int n) {
    int i = 0, j = n-1;

    while (i < j) {
        swap(arr[i++], arr[j--]);
    }
}

int main() {
    int n;
    cout << "Enter Length of an array : ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter element of an array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Array after reverse :" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}