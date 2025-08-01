#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{

    int start =0 , end = n-1;
    while(start<end)
    {
        // Swap the elements at start and end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    cout << "Array is: ";
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reversing the array
    cout << "reverse array is: " ;
    reverse(arr, 5);
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}