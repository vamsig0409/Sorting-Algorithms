#include<bits/stdc++.h>
using namespace std;

int partition(int* arr,int first,int last){
    int pivot=arr[last];
    int i=first-1;     //i for inserting elements less than pivot

    for(int j=first;j<last;j++){    //j for finding elements less than pivot
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    //i is pointing to the last element<pivot
    //so swaping i+1th element to pivot brings pivot at correct position
    swap(arr[i+1],arr[last]);

    return i+1;
}

void QuickSort(int* arr,int first,int last){
    //Base Case-
    if(first>=last)
        return;
    
    int pi=partition(arr,first,last);
    //Reccursive Call-
    QuickSort(arr,first,pi-1);
    QuickSort(arr,pi+1,last);
}

int main(){
    int arr[]={20,12,35,16,18,30};
    int n=sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}