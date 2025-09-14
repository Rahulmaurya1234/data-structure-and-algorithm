#include<iostream>
using namespace std;      
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int str,end;
    int minsum=INT_MAX;
    for(str=0;str<n;str++){
        int sum=0;
        for(end=str;end<n;end++)
        {
            sum=sum+arr[end];
            if(sum<minsum)
            {
                minsum=sum;
            }

        }

    }
    cout<<"Minimum subarray sum is: "<<minsum<<endl;
    return 0;
}
    