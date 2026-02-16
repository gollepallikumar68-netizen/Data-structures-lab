#include <iostream>
using namespace std;

int main() {
    int i, n, key, a[10], count = 0;

    cout << "Enter n and key value: ";
    cin >> n >> key;

    for(i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
        if(a[i] == key) {
            cout << "Key found at position " << i+1 << "\n";
            count++;
        }
    }

    if(count == 0)
        cout << "Key not found\n";
    else
        cout << key << " found " << count << " times\n";

    return 0;
}
