#include<iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter n value: ";
    cin >> n;

    if(n == 0)
        cout << "Factorial value is: " << fact;
    else
    {
        for(int i = 1; i <= n; i++)  // start from 1
        {
            fact = fact * i;
        }
        cout << "Factorial value is: " << fact;
    }
    return 0;
}
