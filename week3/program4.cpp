#include <iostream>
using namespace std;

int main() {
    int n, i, key, a[10];
    cout << "Enter n value: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "Enter key element: ";
    cin >> key;

    bool found = false;
    for(i=0; i<n; i++) {
        if(key == a[i]) {
            cout << "Key element found at position " << i << "\n";
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Key element not found\n";
    }

    return 0;
}
