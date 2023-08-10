class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>    my_set;
        int index_right;
        int index_left;
        int max = 0;
        int start_current= 0;
        for(index_right = 0; index_right < s.length(); index_right++){
            if(!my_set.contains(s[index_right])){ // not exist
                my_set.insert(s[index_right]);
            }
            else{ //exist
                    for(index_left = start_current; index_left < index_right; index_left++){
                        if(s[index_left] == s[index_right]){
                            max = std::max(max,index_right-start_current);
                            start_current = index_left + 1;
                            my_set.insert(s[index_right]);
                            break;
                        } else{
                            my_set.erase(s[index_left]);
                        }


                    }

            }


        }
        max = std::max(index_right - start_current,max);
        return max;
    }
};
