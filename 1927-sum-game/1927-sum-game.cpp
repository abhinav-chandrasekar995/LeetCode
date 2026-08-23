class Solution {
public:
    bool sumGame(string num) {
        int lq=0,rq=0;
        int ls=0,rs=0;
        int n=num.size();

        for(int i=0;i<n/2;i++) {
            if(num[i]=='?') lq++;
            else ls+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++) {
            if(num[i]=='?') rq++;
            else rs+=num[i]-'0';
        }
        int qdiff=lq-rq;
        int diff=ls-rs;
        if (qdiff%2!=0)
            return true;
        return diff != -9*qdiff/2;
    }
};