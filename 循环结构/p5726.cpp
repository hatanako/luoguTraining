#include <iostream>
#include <cstdio>
using namespace std;
int n;

int main(){
	cin>>n;
	float x,maxx,minx,sumx;
	cin>>x;
	maxx=x;
	minx=x;
	sumx=x;
	for(int i=1;i<n;i++){
		cin>>x;
		if(x>maxx)maxx=x;
		if(x<minx)minx=x;
		sumx+=x;
	}
	sumx=sumx-minx-maxx;
	printf("%.2f",sumx/(n-2));
	
}
