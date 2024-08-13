#include <iostream>
using namespace std;
int n,count;
int main(){
	cin>>n;
	int a[101];
	for(int i=0;i<n;i++){
		count=0;
		cin>>a[i];
		for(int j=0;j<i;j++){
			if(a[i]>a[j])
			count++;
		}
		cout<<count<<" ";
	}
} 
