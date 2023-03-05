// https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int> in;
    
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        in.push_back(temp);
    }


    sort(in.begin(),in.end());
    
    int count = 1;
    
    for(int i=0;i<n-1;i++){
        if(in[i]!=in[i+1]){
            count++;
        }
    }
    
    cout<<count;
    
    return 0;   
}