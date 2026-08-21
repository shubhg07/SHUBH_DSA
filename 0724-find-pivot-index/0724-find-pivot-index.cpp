class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        vector<int> sumLeft;
        int x = 0;
        for(int i = 0; i < nums.size(); i++){
            x += nums[i];
            sumLeft.push_back(x);
        }

        vector<int> sumRight;
        int y = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            y += nums[i];
            sumRight.push_back(y);
        }

        for(int i = 0; i < nums.size(); i++){
            if(sumLeft[i] == sumRight[nums.size()-1-i]){
                return i;
            }
        }
        return -1;
    }
};