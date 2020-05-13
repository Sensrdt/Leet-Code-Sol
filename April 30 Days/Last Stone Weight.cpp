class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq(stones.begin(), stones.end());
        
        while(pq.size() > 1){
            int one = pq.top();
            pq.pop();
            
            int two = pq.top();
            pq.pop();
            
            if (one == two){
                continue;
            }else{
                pq.push(abs(one - two));
            }
        }
        
        if (!pq.empty()){
            return pq.top();
        }
        
        return 0;
    }
};
