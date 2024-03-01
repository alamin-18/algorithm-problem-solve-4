#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    if(v[v.size()-1].second < v[v.size()-2].second){
        cout<<v[v.size()-1].second<<" "<< v[v.size()-2].second<<endl;
    }
    else{
        cout<<v[v.size()-2].second<<" "<< v[v.size()-1].second<<endl;
    }
   }
    return 0;
}