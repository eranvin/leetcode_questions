class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int require, index_1, index_2;


        for(index_1 = 0; index_1 < nums.size() -1; index_1++){
            require = target - nums.at(index_1);
            for(index_2 = index_1 + 1; index_2 < nums.size(); index_2++){
                if(nums.at(index_2) == require){
                    return {index_1,index_2};
                }
            
            }
        }

        

        return {};
    }
};
