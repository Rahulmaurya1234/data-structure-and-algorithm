#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a decimal number" << endl;
    cin >> n;
    int binary =0 , base = 1,rem;
    while(n>0){
        rem=n % 2;
        n=n/2;
        binary = binary + rem*base;
        base = base * 10;
    }
    cout << "The binary equivalent is: " << binary << endl;
    return 0;
}