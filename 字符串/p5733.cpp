#include <iostream>
#include <string>
using namespace std;
string a;
int main(){
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]>='a'&&a[i]<='z')
			a[i]-=32;
	}
	cout<<a;
} 
