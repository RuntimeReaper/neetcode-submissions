class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0,j=0;
        while(i<word.size() && j<abbr.size()){
            char chw=word[i];
            char cha=abbr[j];
            if(isalpha(cha)){
                if(chw!=cha) return false;
                i++;j++;
            }else{
                if(cha=='0') return false;
                int nums=0;
                while(j<abbr.size() && isdigit(abbr[j])){
                    nums=nums*10+(abbr[j]-'0');
                    j++;
                }
                i+=nums;
            }
        }
        return i==word.size() && j==abbr.size();
    }
};