#include <iostream>
using namespace std;
int a,n=1;
int main(){
	cin>>a;
	while(a!=1){
		a=a/2;
		n++;
	}
	cout<<n;
	return 0;
}
