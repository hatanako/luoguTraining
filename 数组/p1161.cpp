#include <iostream>
#include <cmath>
using namespace std;
int n;
double a,t;
double maxa,maxt;
bool x[2000005]={false};
int main(){
	cin>>n;
	while(n--){
		cin>>a>>t;
		if(a>maxa)maxa=a;
		if(t>maxt)maxt=t;
		for(double i=1;i<=t;i++){
			int num = floor(i*a);
			x[num]=!x[num];
		}
	}
	for(int i=1;i<=floor(maxa*maxt);i++){
		if(x[i]){
			cout<<i;
			return 0;
		}
	}
} 
