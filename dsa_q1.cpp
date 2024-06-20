#include<iostream>
#include<map>
using namespace std;
int main(){
	string host="SANTACLAUS";
	string guest="DEDMOROZ";
	string scramble="SANTAMOROZDEDCLAUS";
	if(scramble.length()!=host.length()+guest.length()){
		cout<<"NO";
	}
	else{
		string combined=host+guest;
		map<char,int>combined_map;
		map<char,int>scramble_map;
		for(char ch:combined){
			combined_map[ch]++;
		}
		for(char ch:scramble){
			scramble_map[ch]++;
		}
		if(scramble_map==combined_map){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
}
