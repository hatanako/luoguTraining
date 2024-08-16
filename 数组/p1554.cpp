#include <iostream>
using namespace std;
int m,n;
int a[15]={0};
int main(){
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		int x=i;
		while(x){
			a[x%10]++;
			x/=10;
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}
