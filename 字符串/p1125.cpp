#include <iostream>
#include <string>
using namespace std;
string x;
int a[30];
bool zs(int num){
	if(num<=1) return false;
	for(int i=2;i<num/2;i++){
		if(num%i==0) return false;
	}
	return true;
}
int main(){
	cin>>x;
	for(int i=0;i<x.size();i++)
		a[x[i]-97]++;
		
	int maxn=0;
	int minn=200;
	for(int i=0;i<26;i++){
		if(a[i]>maxn)maxn=a[i];
		if(a[i]<minn&&a[i]!=0)minn=a[i];
	}
	if(zs(maxn-minn)){
		cout<<"Lucky Word"<<endl<<maxn-minn;
	} else {
		cout<<"No Answer"<<endl<<0;
	}
	
}
