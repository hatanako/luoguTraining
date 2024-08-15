#include <iostream>
using namespace std;
int n,a[12],x,c[12];
int main(){
	cin>>n>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
	while(n--){
	int t=7;
		for(int i=0;i<7;i++){
			cin>>x;
			for(int j=0;j<7;j++)
				if(x==a[j])t--;
		}
		c[t]++;
	}
	for(int i=0;i<7;i++){
		cout<<c[i]<<" ";
	}
} 
