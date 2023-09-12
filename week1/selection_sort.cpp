#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int &x :arr) cin >> x; //cú pháp nhập mảng
    int a=n;
    int b=0;
    while(a!=1){
        int min=arr[n-a];
        for(int i=(n-a);i<n;i++){
           if(arr[i]<min){
            b=i;
            min=arr[i];
           }
        }
        swap(arr[b],arr[n-a]);
        a--;
    }
    for (auto b : arr) cout << b << " "; //cú pháp in mảng

}