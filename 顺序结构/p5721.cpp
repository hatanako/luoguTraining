#include <iostream>
using namespace std;
int n,num;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			num++;
			if(num<10){
				cout<<0;
			}
			cout<<num;
		}
		cout<<endl;
	}
	return 0;
}
