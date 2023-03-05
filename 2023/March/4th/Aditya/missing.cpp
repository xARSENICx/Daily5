//https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n-1];
    
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    

    bool tag[n+1]={0};
    
    for(int i=0;i<n-1;i++){
        tag[arr[i]]=1;
    }
    
    int missing;
    
    for(int i=1;i<=n;i++){
        if(!tag[i]){
            missing = i;
            break;
        }
    }
    
    cout<<missing;
    return 0;   
}