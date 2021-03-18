#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*first way
void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
*/

/*void reverseArray(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}*/
void reverseArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[size-i-1]<<" ";
    }
}

int main()
{
    int arr[] = {1,4,5,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    // reverseArray(arr,0,n-1);
    reverseArray(arr,n);
    // printArray(arr,n);
}