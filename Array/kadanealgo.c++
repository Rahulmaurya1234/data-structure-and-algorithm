#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int maxsum=INT_MIN;    //mtlb if sum o se chhota ho uska 0 bna do kyoki -ve number bda h to sum hmesa -ve me aayega 
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        maxsum=max(maxsum,currentsum);
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    cout<<"Maximum subarray sum is: "<<maxsum<<endl;
    return 0;
}


// //Keep track of:

// current_sum: max sum ending at current position

// max_sum: overall max so far

// If current_sum becomes negative, reset it to 0.