#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int result = a | b;  // Bitwise OR operation
    cout << "The result of " << a << " | " << b << " is: " << result << endl;
    int n = a&b;  // Bitwise AND operation
    cout << "The result of " << a << " & " << b << " is: " << n << endl;
    int xor_result = a ^ b;  // Bitwise XOR operation
    cout << "The result of " << a << " ^ " << b << " is: " << xor_result << endl;           

    return 0;
}