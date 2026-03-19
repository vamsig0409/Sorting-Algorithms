#include<bits/stdc++.h>
using namespace std;

void Merge(int* arr,int st_pt,int mid_pt,int en_pt){
    int an=mid_pt-st_pt+1;
    int bn=en_pt-mid_pt;

    //Creating Two Temp Arrays-
    int a[an];
    int b[bn];

    for(int i=0;i<an;i++)
        a[i]=arr[st_pt+i];
    for(int j=0;j<bn;j++)
        b[j]=arr[mid_pt+1+j];

    //combining the arrays in sorted manner-
    int i=0;       //i=initial index of first subarray
    int j=0;       //j=initial index of second subarray
    int k=st_pt;   //k=initial index of merger subarray
    while(i<an && j<bn){
        if(a[i]<b[j])
            arr[k++]=a[i++];
        else
            arr[k++]=b[j++];
    }
    while(i<an)
        arr[k++]=a[i++];
    while(j<bn)
        arr[k++]=b[j++];
}

void MergeSort(int* arr,int l,int r){
    //Base Case-
    if(l>=r)
        return;

    int mid=(l+r)/2;

    //Recursive Call-
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);

    //Merging the seperated arrays-
    Merge(arr,l,mid,r);
}

int main(){
    int arr[]={10,28,24,6,34,18,38,44};
    int n=sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}