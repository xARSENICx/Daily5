//https://cses.fi/problemset/task/1621

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
    
    vector<int> dist;
    
    bool cont;
    int count = 0;
    for(int i=0;i<n;i++){
        cont = 0;
        for(int j=0;j<dist.size();j++){
            if(in[i]==dist[j]){
                cont = 1;
                break;
            }
        }
        if(cont){
            continue;
        }
        count++;
        dist.push_back(in[i]);
        
    }
    
    cout<<count;
    
    return 0;   
}