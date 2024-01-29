#include <string>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int highestLength = 0;
        int length = 0;
        int start = 0;
        string characters{};
        for (int i = start; i < s.length(); i++) {
            if (characters.find(s[i]) == string::npos) {
                length++;
                characters += s[i];
            }
            else {
                i = ++start;
                length = 1;
                characters = s[i];
            }
            highestLength = length > highestLength ? length : highestLength;
        }
        return highestLength;
    }
};