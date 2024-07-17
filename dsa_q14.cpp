#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count_even=0;
    int count_odd=0;
    int total=0;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        if(element%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
        total+=element;
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    if(total%2==0){
        cout<<count_even;
    }
    else{
        cout<<count_odd;
        }
}
