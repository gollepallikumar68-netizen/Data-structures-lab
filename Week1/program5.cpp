#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter n value: ";
    cin >> n;

    for(int i = 1; i <= n; i++)   // start from 1
    {
        if(n % i == 0)            // check divisibility
            count++;              // count divisors
    }

    if(count == 2)                // prime has exactly 2 divisors
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
