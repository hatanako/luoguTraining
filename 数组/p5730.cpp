#include <iostream>
#include <string>
using namespace std;
int n;
string x;
string a[10];
int main(){
	cin>>n;
	cin>>x;
	for(int i=0;i<n;i++){
		if(x[i]=='0'){
			a[0]+="XXX";
			a[1]+="X.X";
			a[2]+="X.X";
			a[3]+="X.X";
			a[4]+="XXX";
		}
		if(x[i]=='1'){
			a[0]+="..X";
			a[1]+="..X";
			a[2]+="..X";
			a[3]+="..X";
			a[4]+="..X";
		}
		if(x[i]=='2'){
			a[0]+="XXX";
			a[1]+="..X";
			a[2]+="XXX";
			a[3]+="X..";
			a[4]+="XXX";
		}
		if(x[i]=='3'){
			a[0]+="XXX";
			a[1]+="..X";
			a[2]+="XXX";
			a[3]+="..X";
			a[4]+="XXX";
		}
		if(x[i]=='4'){
			a[0]+="X.X";
			a[1]+="X.X";
			a[2]+="XXX";
			a[3]+="..X";
			a[4]+="..X";
		}
		if(x[i]=='5'){
			a[0]+="XXX";
			a[1]+="X..";
			a[2]+="XXX";
			a[3]+="..X";
			a[4]+="XXX";
		}
		if(x[i]=='6'){
			a[0]+="XXX";
			a[1]+="X..";
			a[2]+="XXX";
			a[3]+="X.X";
			a[4]+="XXX";
		}
		if(x[i]=='7'){
			a[0]+="XXX";
			a[1]+="..X";
			a[2]+="..X";
			a[3]+="..X";
			a[4]+="..X";
		}
		if(x[i]=='8'){
			a[0]+="XXX";
			a[1]+="X.X";
			a[2]+="XXX";
			a[3]+="X.X";
			a[4]+="XXX";
		}
		if(x[i]=='9'){
			a[0]+="XXX";
			a[1]+="X.X";
			a[2]+="XXX";
			a[3]+="..X";
			a[4]+="XXX";
		}
		if(i!=n-1){
			a[0]+=".";
			a[1]+=".";
			a[2]+=".";
			a[3]+=".";
			a[4]+=".";
		}
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
}
