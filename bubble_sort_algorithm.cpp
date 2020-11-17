#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n-i-1); j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    int myarray[100];
    cout<<"Enter size of your array:"<<endl;
    cin>>n;

    cout << "Enter your integers in any order: " <<endl;

    for(int i=0; i<n; i++)
    {
        cin>>myarray[i];
    }

    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<myarray[i]<<" ";
    }
    cout<<endl;

    bubbleSort(myarray, n);  //sorting

    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<myarray[i]<<" ";
    }


    return 0;
}
