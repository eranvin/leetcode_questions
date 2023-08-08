class Solution {
public:
    int romanToInt(string s) {

    std::map<char, int> my_map = {
    { 'I', 1 },
    { 'V', 5 },
    { 'X', 10 },
    { 'L', 50 },
    { 'C', 100 },
    { 'D', 500 },
    { 'M', 1000 }
};
    int result = 0;
    int length = s.length();
    for(int i = 0; i < length - 1; i++){
        if( my_map[s[i]] < my_map[s[i + 1]])
            result -= my_map[s[i]];
        else
            result += my_map[s[i]];
    }
        result += my_map[s[length - 1]];
        return result;
    }
};
