#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }

    cout << "Element not found in the array." << endl;

    return 0;
}