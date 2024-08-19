#include <iostream>
#include <string>
using namespace std;
int n;
int x;
int s=1;
bool flag = false;
int a[201][201];

int main(){
	int i=1,j=1;
	cin>>n;
	while(s<n*n){
		cin>>x;
		s+=x;
		while(x--){
			if(flag) a[i][j]=1;
			else a[i][j]=0;
			if(j==n){
				j=1;
				i++;
				continue;
			}
			j++;
		}
		flag = !flag;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
} 
