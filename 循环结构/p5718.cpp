#include <iostream>
using namespace std;
int n;
int xmin,a;
int main(){
	cin>>n;
	xmin = 1000;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<xmin) xmin = a;
	}
	cout<<xmin;
	return 0;
}
