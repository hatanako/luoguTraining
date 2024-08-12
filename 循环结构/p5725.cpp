#include <iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			if(n*i+j<10){
				cout<<"0";
			}
			cout<<n*i+j;
		}
		cout<<endl;
	}
	cout<<endl;
	int num=0;
	for(int i=0;i<n;i++){
		for(int k=n;k>i+1;k--){
			cout<<"  ";
		}
		for(int j=1;j<=i+1;j++){
			num++;
			if(num<10){
				cout<<"0";
			}
			cout<<num;
		}
		cout<<endl;
	}
} 
