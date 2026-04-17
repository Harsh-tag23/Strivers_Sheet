#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Give the sixe of the array"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<arr.size();j++)
    {
        sum=arr[j]^sum;
    }
    cout<<"The element which occurs only once is "<<sum;
}