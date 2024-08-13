#include <iostream>
#include <stack>
using namespace std;
int n;
int main(){
	cin>>n;
	stack<int> a;
	a.push(n);
	while(n!=1){
		if(n%2==0) n/=2;
		else n=n*3+1;
		a.push(n);
	}
	while(a.size()){
		cout<<a.top()<<" ";
		a.pop();
	}
}
