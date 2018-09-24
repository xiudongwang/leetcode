class Solution {
public:
    bool judgeCircle(string moves) {
        int v=0;
        int h=0;
        for(auto ch:moves){
            switch(ch){
                case 'R': h+=1; break;
                case 'L': h-=1; break;
                case 'U': v+=1; break;
                case 'D': v-=1; break;
                default :break;
            }
        }
        return (v==0) &&(h==0);
    }
};
