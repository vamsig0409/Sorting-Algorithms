#include<bits/stdc++.h>
using namespace std;

void OptimizedBubbleSort(vector<int>&v){    //By Reference
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                flag=true;   
                swap(v[j],v[j+1]);
            }
        }
        if(!flag)
                break;
    }
}

int main(){
    int n;
    cout<<"Enter the size of vector - ";
    cin>>n;
    
    vector<int>v1(n);

    for(int i=0;i<n;i++)
        cin>>v1[i];
    
    OptimizedBubbleSort(v1);

    for(int i=0;i<n;i++)
        cout<<v1[i]<<" ";
    

    return 0;
}