#include<iostream>
using namespace std;

int recursiveSearch(int arr[],int key,int l,int r)
{

        int mid=l+(r-1)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]<key)
        {

            return recursiveSearch(arr,key,mid+1,r);
        }
        else
            return recursiveSearch(arr,key,l,mid-1);

}

int main()
{
    int arr[20],i,l=0,r,key;
    cout<<"Enter limit:";
    cin>>r;
    cout<<"Enter elements in an array";
    for(i=0;i<r;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key element to be find !!";
    cin>>key;
    cout<<recursiveSearch(arr,key,l,r-1);

    return 0;
}
