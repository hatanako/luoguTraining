#include <iostream>
using namespace std;
float x=2.0;
float sum,s;
int n;
int main(){
	cin>>s;
	while(sum<s){
		sum+=x;
		x*=0.98;
		n++;
	}
	cout<<n;
}
