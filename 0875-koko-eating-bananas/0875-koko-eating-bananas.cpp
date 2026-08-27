class Solution {
private:
    long long time(vector<int>& piles, int k){
        long long totalhours = 0;
        for(int i = 0; i < piles.size(); i++){
            totalhours += ceil((double)piles[i]/(double)k);
        }
        return totalhours; 
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            if(time(piles,mid) > h){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        } 
        return low;
    }
};