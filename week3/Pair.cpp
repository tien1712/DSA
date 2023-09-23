#include <iostream>
#include <map>
using namespace std;

map<int,int> mp; 
int main(){
    int n;cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt+=mp[a[i]];
        mp[a[i]]++;
    }
    cout<<cnt;
}
