class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // Take String Because type of Function is String
        string result = "";
        int i = 0, j = 0;
        int n1 = word1.size(), n2 = word2.size();
        int n = min(n1,n2);
        // Take All Common index Number
        while (i < n) {
            result += word1[i++];
            result += word2[j++];
        }
        // Append remaining characters if any charecters is present
        while (i < n1) result += word1[i++];
        while (j < n2) result += word2[j++];

        return result;
    }
};