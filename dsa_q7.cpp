#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> a(2 * n);
    map<int, vector<int>> map1;
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
        map1[a[i]].push_back(i + 1);
    }
    for (auto &e : map1) {
        if (e.second.size() % 2 != 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    for (auto &m : map1) {
		for(int i=0;i<m.second.size();i+=2){
			cout<<m.second[i]<<" "<<m.second[i+1]<<endl;
		}
    }
 
    return 0;
}
