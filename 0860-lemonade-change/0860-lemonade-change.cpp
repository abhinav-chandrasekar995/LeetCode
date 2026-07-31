class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       if (bills[0]==10 || bills[0]==20) return false;
       int fivebill=0;
       int tenbill=0;
       fivebill=1;

       for(int i=1;i<bills.size();i++){
        if(bills[i]==5) fivebill++;
        if(bills[i]==10 && fivebill==0) return false;
        if(bills[i]==10 && fivebill>0){
            tenbill++;
            fivebill--;
        }
        if(bills[i]==20 && (fivebill>=1 && tenbill>=1)){

            tenbill--;
            fivebill--;
        }
        else if(bills[i]==20 && (fivebill>=3 && tenbill==0)){
            fivebill-=3;
        }
        else if(bills[i]==20) return false;
       }
       return true;
    }
};