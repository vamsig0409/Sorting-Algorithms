#include<bits/stdc++.h>
using namespace std;

void CountSort(vector<int>&v,int size,int pos){
    //Creating frequency array-
    vector<int>freq(10,0);
    for(int i=0;i<size;i++)
        freq[(v[i]/pos)%10]++;

    //Commulative frequency-
    for(int i=1;i<10;i++)
        freq[i]+=freq[i-1];

    //Answer array-
    vector<int>ans(size);
    for(int i=size-1;i>=0;i--)
        ans[--freq[(v[i]/pos)%10]]=v[i];

    //Copying into original array-
    for(int i=0;i<size;i++)
        v[i]=ans[i];
}

void RadixSort(vector<int>&v){
    int n=v.size();
    int max_ele=INT_MIN;

    for(auto x:v)
        max_ele=max(x,max_ele);
    
    for(int pos=1;max_ele/pos>0;pos*=10)
        CountSort(v,n,pos);
}

int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    RadixSort(v);

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    
    return 0;
}