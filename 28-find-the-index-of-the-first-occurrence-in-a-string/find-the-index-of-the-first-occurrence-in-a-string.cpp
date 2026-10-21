class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i = 0;
        int j = 0;
        int rindex = 0;

        if (needle == "")
            return 0;
            
        while(i < haystack.size()) {

            if (haystack[i] == needle[j]) {
                if (j == 0) 
                    rindex = i;

                i++;
                j++;

                if (j == needle.size())
                    return rindex; 
            }
            else {
                i = i - j + 1;
                j = 0;
            }      
        }
        return -1;
    }
};