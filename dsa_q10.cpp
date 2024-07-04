#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int m;
	int d;
	cin>>n>>m>>d;
	vector<int> matrix;
	for(int i=0;i<n*m;i++){
		int e=0;
		cin>>e;
		matrix.push_back(e);
	}
	int rem=matrix[0]%d;
	vector<int> new_matrix;
	for(int j=0;j<n*m;j++){
		if(matrix[j]%d!=rem){
			cout<<-1;
			return 0;
		}
		else{
			new_matrix.push_back((matrix[j]-rem)/d);
		}
	}
	sort(new_matrix.begin(),new_matrix.end());
	int med=new_matrix[(n*m)/2];
	int ans=0;
	for(int k=0;k<new_matrix.size();k++){
		ans+=abs(new_matrix[k]-med);
	}
	cout<<ans;
}
