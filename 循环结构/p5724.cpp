#include <iostream>
using namespace std;
int n,a,maxa,mina;
int main(){
	cin>>n>>a;
	maxa=a;mina=a;
	for(int i=1;i<n;i++){
		cin>>a;
		if(a>maxa) maxa=a;
		if(a<mina) mina=a;
	}
	cout<<maxa-mina;
}
