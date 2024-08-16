#include <iostream>
using namespace std;
int n,m,minx,x[3005],sum;
int main(){
	cin>>n>>m;
	minx=99999999;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=1;i<=n-m+1;i++){
		for(int j=i;j<i+m;j++)sum+=x[j];
		if(sum<minx)minx=sum;
		sum=0;
	}
	cout<<minx;
}
