#include <iostream>
#include <string>
using namespace std;
int boy,girl;
string x;
int main(){
	cin>>x;
	for(int i=0;i<x.size()-2;i++){
		if(x[i]=='b'||x[i+1]=='o'||x[i+2]=='y')boy++;
		else if(x[i]=='g'||x[i+2]=='r'||x[i+1]=='i'||x[i+3]=='l')girl++;
	}
	cout<<boy<<endl<<girl;
} 
