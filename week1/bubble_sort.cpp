#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <set>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int &x :a) cin >> x;
    
    int temp; // biến tạm temp
    for (int i = 0; i < n; i++){
	for (int j = 0 ; j < n-i; j++){
		if (a[j] > a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
			}
		}
	}
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}