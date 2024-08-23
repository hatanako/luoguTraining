#include <iostream>
#include <string>
using namespace std;
int n;
string x;
int main(){
	cin>>n;
	cin>>x;
	while(n--){
		int num,a,b;
		cin>>num;
		string str="";
		if(num==1){
			cin>>str;
			x+=str;
		} else if(num==2){
			cin>>a>>b;
			str=x;
			x="";
			for(int i=a;i<(str.length(),a+b);i++)
				x+=str[i];
		} else if(num==3){
			cin>>a>>str;
			string qaq="";
			for(int i=0;i<a;i++)
				qaq+=x[i];
			qaq+=str;
			for(int i=a;i<x.length();i++)
				qaq+=x[i];
			x=qaq;
		} else if(num==4){
			cin>>str;
			if(x.find(str)<100)
				cout<<x.find(str)<<endl;
			else cout<<-1<<endl;
			continue;
		}
		cout<<x<<endl;
	}
} 
