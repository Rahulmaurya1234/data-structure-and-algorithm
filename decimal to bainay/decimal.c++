#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a binary number" << endl;
    cin >> n;
    int decimal = 0, base = 1, rem;

    while (n > 0) {
        rem = n%10;
        n= n/10;
        decimal = decimal+ rem * base;
        base = base * 2;
        
        
    }
    cout << "The decimal equivalent is: " << decimal << endl;
    return 0;
}