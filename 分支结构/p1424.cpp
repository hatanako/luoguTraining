#include <iostream>
using namespace std;
int t,x,n,sum=0;

int main(){
	cin>>x>>n;
	t=x;
	while(t<x+n){
		if(t%7!=6&&t%7!=0)
			sum+=250;
		t++;
	}
	cout<<sum;
	return 0;
}
