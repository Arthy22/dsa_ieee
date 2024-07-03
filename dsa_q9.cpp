#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int h;
	int m;
	int time[24][60]={};
	int cash=1;
	for(int i=0;i<n;i++){
		cin>>h>>m;
		time[h][m]++;
	}
	for(int j=0;j<24;j++){
		for(int k=0;k<60;k++){
			if(time[j][k]>cash){
				cash=time[j][k];
			}
		}
	}
	cout<<cash;
}
