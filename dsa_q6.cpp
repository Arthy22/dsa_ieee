class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=*max_element(piles.begin(),piles.end());
        int min=1;
        while(min<max){
            int sum=0;
            int mid=(min+max)/2;
            for(int j=0;j<piles.size();j++){
                sum+=(piles[j]+mid-1)/mid;
            }
            if(sum>h){
                min=mid+1;
            }
            else{
                max=mid;
            }
        }
        return min;
    }
};
