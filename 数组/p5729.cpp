#include <iostream>
#include <cmath>
using namespace std;

int w,x,h,q;
int sq[25][25][25]={0};
int sum;

void count(int a,int b,int c,int a1,int b1,int c1){
	for(int i=min(a,a1);i<=max(a,a1);i++)
		for(int j=min(b,b1);j<=max(b,b1);j++)
			for(int k=min(c,c1);k<=max(c,c1);k++)
				sq[i][j][k]=1;
}
int main(){
	int x1,y1,z1,x2,y2,z2;
	cin>>w>>x>>h;
	sum=0;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		count(x1,y1,z1,x2,y2,z2);
	}
	for(int i=1;i<=w;i++)
		for(int j=1;j<=x;j++)
			for(int k=1;k<=h;k++)
				if(sq[i][j][k]==0)sum++;
	cout<<sum;
} 
