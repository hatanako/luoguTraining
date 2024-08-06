#include <iostream>
using namespace std;
long long a,b,c;
long long maxx,minx;
int main(){
	cin >> a >> b >> c;
	minx = a;
	maxx = a;
	if(b<minx) minx = b;
	if(c<minx) minx = c;
	if(b>maxx) maxx = b;
	if(c>maxx) maxx = c;
	for(int i=minx;i>0;i--){
		if(minx%i==0&&maxx%i==0){
			minx=minx/i;
			maxx=maxx/i;
		}
	}

	cout<<minx<<"/"<<maxx;
	return 0;
}
