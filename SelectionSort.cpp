#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>&v){
    int n=v.size();

    for(int i=0;i<n-1;i++){
        int min_idx=i;
        //Finding Min Element-
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_idx])
               min_idx=j;
        }
        //Placing min element at beginning-
        if(min_idx!=i)
            swap(v[i],v[min_idx]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of vector - ";
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];
    
    SelectionSort(v);

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}