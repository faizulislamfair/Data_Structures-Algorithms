#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int key;
    int j=0;

    for(int i=1; i<n; i++)
    {
        key = arr[i]; //picking the element
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }

}

int main()
{
    int n;
    int myarray[100];
    cout<<"Enter the size of your array:"<<endl;
    cin>>n;
    cout<<"Enter your integers in any order"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>myarray[i];
    }

    cout<<"Before Sorting: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<myarray[i]<<" ";
    }

    insertionSort(myarray, n);

    cout<<endl<<"After Sorting: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<myarray[i]<<" ";
    }

    return 0;
}
