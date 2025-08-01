#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout << "Array is: ";
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // // Reversing the array
     cout << "reverse array is: " ;
    for(int i=4; i>=0; i--)
    {
        cout  << arr[i] << " ";
    }
    cout << endl;

    return 0;
}