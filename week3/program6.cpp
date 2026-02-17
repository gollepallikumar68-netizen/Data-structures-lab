#include <iostream>
using namespace std;

int main() {
    int a[10], i, n, key;
    cout << "Enter n and key values: ";
    cin >> n >> key;

    for (i = 0; i < n; i++) {
        cout << "Enter array element " << i+1 << ": ";
        cin >> a[i];
    }

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Key found at index " << mid << endl;
            found = true;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Key not found" << endl;
    }

    return 0;
}
