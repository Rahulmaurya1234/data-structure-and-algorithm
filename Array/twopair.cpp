#include<iostream>
#include<vector>
using namespace std;
vector<int> twopair(vector<int>& arr, int target) {
    vector<int> result;
    for (int i = 0; i < target; i++) {
        for (int j = i + 1; j < target; j++) {
            if(arr[i] + arr[j] == target) {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
            }
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = 5;
    vector<int> result = twopair(arr, n);
    
    cout << "Two pair sums are: ";
    cout << result[0] << " ";
    cout << result[1] << " ";
    cout << result[2] << " ";
    cout << result[3] << " ";
    cout << endl;
    cout << "Total pairs found: " << result.size() / 2 << endl;
    return 0;
}