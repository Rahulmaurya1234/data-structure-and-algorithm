#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1, 2, 3, 4, 5};
    int n=5;
    for(int str = 0; str<n;str++)
    {
        for(int end=str;end<n;end++)
        { 
            for(int i=str;i<=end;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
