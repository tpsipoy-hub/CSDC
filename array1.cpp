#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isAscending = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = false;
            break;
        }
    }

    if (isAscending)
        cout << "The array is in ascending order.";
    else
        cout << "The array is not in ascending order.";

    return 0;
}
