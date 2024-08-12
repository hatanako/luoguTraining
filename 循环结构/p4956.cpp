#include <iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	n/=364;
	for(int i=n-1;i>0;i--){
		if(i>100) continue;
		if((n-i)%3==0){
			cout<<i<<endl<<(n-i)/3;
			break;
		}
	}
	return 0;
}
