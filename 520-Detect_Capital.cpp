/*my solution*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool bFirstBig=false;
        int  count=0;
        if(word.size()<=1)
            return true;
        bFirstBig = isupper(word[0]);
        if(bFirstBig) count++;
        for(int i=1; i<word.size(); i++){
            if(isupper(word[i])) count++;
        }
        if(bFirstBig && count==1)
            return true;
        if(bFirstBig && count==word.size())
            return true;
        if(bFirstBig && (count-1==word.size()))
            return true;
        if(count==0)
            return true;
        return false;
    }
};


/*other peoples solution*/
/*1~n must be the same, (0 lower, 1-n supper) is not the case */
bool detectCapitalUse(string word) {
    for(int i = 1; i < word.size(); i++){
        if(isupper(word[1]) != isupper(word[i]) || 
           islower(word[0]) && isupper(word[i])) return false;
    }        
    return true;
}



