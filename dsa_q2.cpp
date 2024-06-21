class StockSpanner {
private:
    stack<pair<int,int>>prices;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        int span=1;
        while(!prices.empty() && prices.top().first<=price ){
            span+=prices.top().second;
            prices.pop();
        }
        prices.push({price,span});
        return span;
    }
};
