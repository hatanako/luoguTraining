#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++){
		a[i]=((a[i]-97+n)%26)+97;
	}
	cout<<a;
}
