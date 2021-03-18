#include<iostream>
using namespace std;


int kthSmallest(int arr[],int n, int k)
{
    //to shot array we have SQL
    sort(arr,arr+n);
    return arr[k-1];
}


/* this is solution for O(n*n);
int kthSmallest(int arr[], int n, int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr[k-1];
}
*/

int main()
{
    int arr[] = {12,34,21,11,54,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int ans = kthSmallest(arr,n,k);
    cout<<ans<<endl;
}