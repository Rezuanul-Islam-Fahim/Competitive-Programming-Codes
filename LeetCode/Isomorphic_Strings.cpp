/* 
******
****** https://leetcode.com/problems/isomorphic-strings/
******
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> c1, c2;

        for (int i = 0; i < s.length(); i++)
        {
            if (c1[s[i]] == NULL && c2[t[i]] == NULL)
            {
                c1[s[i]] = t[i];
                c2[t[i]] = s[i];
            }
            else if (c1[s[i]] != t[i] && c2[t[i]] != s[i])
                return false;
        }

        return true;
    }
};