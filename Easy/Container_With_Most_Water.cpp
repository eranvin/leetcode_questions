class Solution {
public:
int maxArea(vector<int>& height) {
        int right =  height.size() -1;
        int left  = 0;
        int result = 0;

        while (right > left) {
            result = max(result, min(height.at(left), height.at(right)) * (right - left));
            if(height.at(left) < height.at(right))
                left++;
            else
                right--;
            
        }
        

        return result;
    }
};
