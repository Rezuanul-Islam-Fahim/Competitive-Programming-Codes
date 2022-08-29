/* 
******
****** https://leetcode.com/problems/is-subsequence/
******
*/

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sInd = 0;

        for (int i = 0; i < t.length(); i++)
        {
            if (s[sInd] == t[i])
                sInd++;
        }

        return sInd == s.length() ? true : false;
    }
};