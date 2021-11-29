#include<iostream>
using namespace std;

int LinearSearch(int arr[],int flag,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==flag)
            return i;
    }
}

int main()
{
        int arr[10],i,num,n,flag;
        cout<<"Enter the limit :";
        cin>>n;
        cout<<"Enter the elements in an array !!";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the number to find!!";
        cin>>flag;

        cout<<LinearSearch(arr,flag,n);
       // cout>>"%d is at %d index",flag,i;
    return 0;

}


