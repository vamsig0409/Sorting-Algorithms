#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>&v){    //By Reference
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1])   
                swap(v[j],v[j+1]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of vector - ";
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];
    
    BubbleSort(v);

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

    return 0;
}