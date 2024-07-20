#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
	int n;
	cin>>n;
	unordered_map<string,int> score;
	for(int i=0;i<n;i++){
		string team;
		cin>>team;
		score[team]++;
	}
	int max=0;
	string ans="";
	for(auto s:score){
		if(s.second>max){
			ans=s.first;
			max=s.second;
		}
	}
	cout<<ans;
}
