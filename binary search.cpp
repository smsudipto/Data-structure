#include<iostream>
using namespace std;

int binarySearch(int A[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == x) {
            return mid;
        }
        if (A[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int A[10], n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter your array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Print array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    int x;
    cout << "\nEnter the element to search: ";
    cin >> x;

    int result = binarySearch(A, n, x);
    if (result == -1) {
        cout << "Element not found in the array.";
    }
    else {
        cout << "Element found at index " << result << " in the array.";
    }

    return 0;
}
