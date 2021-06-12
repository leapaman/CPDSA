#include<bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[],int l,int h)
{
    int mid=l+(h-l)/2;
    if(arr[mid]>arr[mid+1] & mid+1<=h)
    return arr[mid];
    
    else if(arr[mid]<arr[h])
    Binarysearch(arr,l,mid);
    
    else Binarysearch(arr,mid+1,h);
    
 
}

int main()
{
	int arr[]={6,7,8,1,2,3,4};
	int h=7;
	int l=0;
	cout<<Binarysearch(arr,l,h-1)<<endl;
}