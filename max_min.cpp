/*
#include<iostream>
#include<cmath>
using namespace std;

int findMin(int arr[],int n)
{
    int low = INT_MAX;
    for(int i=0;i<n;i++)
    {
        low = min(low,arr[i]);
    }
    return low;
}

int findMax(int arr[], int n)
{
    int high = INT_MIN;
    for(int i=0;i<n;i++)
    {
        high = max(high,arr[i]);
    }
    return high;
}

int main()
{
    int arr[] = {10,23,54,1,84,34,65,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_number = findMin(arr,n);
    cout<<"Minimam number is "<<min_number<<endl;
    int max_number = findMax(arr,n);
    cout<<"maximam number is "<<max_number<<endl;
}
*/


/**************************
 * using structure */
#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    if(n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
        return minmax;
    }
    
    if(arr[0]>arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min)
        {
            minmax.min = arr[i];
        } 
    }
    return minmax;
}

int main()
{
    int arr[] = {1000,11,445,1,330,3000};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Pair obj = getMinMax(arr,n);
    cout<<obj.max<<endl;
    cout<<obj.min<<endl;
}

