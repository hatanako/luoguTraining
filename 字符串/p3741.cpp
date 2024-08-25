#include <iostream>
#include <string>
using namespace std;
int n;
string x;
int t=1;
int count = 0;
int main(){
	cin>>n>>x;
	for(int i=0;i<n;i++){
		if(x[i]=='V'&&x[i+1]=='K')
			{
				count++;
				x[i]='X';
				x[i+1]='X';
			}
	}
	for(int i=0;i<n;i++){
		if(x[i]==x[i+1]&&x[i]!='X')
		{
			count++;break;
		}
	}
	cout<<count;
}
