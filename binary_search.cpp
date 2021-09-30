#include<iostream>
using namespace std;

int binarysearch(int ar[],int n,int key)
{
    int s=0;int e=n;int mid;
    
    while(s<=e)
    {
        mid=(s+e)/2;

        if(ar[mid]==key)
        {
            return mid;
        }

        else if(ar[mid]>key)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,i;int key;

    cin>>n;
    int ar[n];
    
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cin>>key;

    cout<<binarysearch(ar,n,key)<<endl;
}
