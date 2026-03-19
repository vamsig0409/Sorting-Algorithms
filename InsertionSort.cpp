#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&v){
    int n=v.size();

    for(int i=1;i<n;i++){
        int curr=v[i];
        //Finding the correct position for current element-
        int j=i-1;
        while(j>=0 && v[j]>curr){
            v[j+1]=v[j];
            j--;
        }
        //Inserting Correct element-
        v[j+1]=curr;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of vector - ";
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];
    
    InsertionSort(v);

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}