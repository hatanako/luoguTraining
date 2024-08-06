#include <iostream>
#include <algorithm>
using namespace std;
int x[3];
string a;

int main(){
	cin>>x[0]>>x[1]>>x[2]>>a;
	sort(x,x+3);
	for(int i=0;i<3;i++){
		int t =a[i]-65;
		cout<<x[t]<<" ";
	}
	return 0;
}
