#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int beg, int end, int x) {
    if (beg > end) return -1; // not found

    int mid = (beg + end) / 2;
    if (arr[mid] == x) return mid;          // found
    else if (arr[mid] > x) return binarySearch(arr, beg, mid - 1, x); // left half
    else return binarySearch(arr, mid + 1, end, x);                   // right half
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int* arr = new int[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int item;
    cout << "Enter element to search: ";
    cin >> item;

    int loc = binarySearch(arr, 0, n - 1, item);
    if (loc == -1) cout << "Element not found" << endl;
    else cout << "Element found at index: " << loc << endl;

    delete[] arr;
    return 0;
}