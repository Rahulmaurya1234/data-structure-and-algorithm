#include<iostream>
using namespace std;      
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int str,end;
    int maxsum=INT_MIN;
    for(str=0;str<n;str++){
        int sum=0;
        for(end=str;end<n;end++)
        {
            sum=sum+arr[end];
            maxsum=max(maxsum,sum);

        }

    }
    cout<<"Maximum subarray sum is: "<<maxsum<<endl;
    return 0;
}