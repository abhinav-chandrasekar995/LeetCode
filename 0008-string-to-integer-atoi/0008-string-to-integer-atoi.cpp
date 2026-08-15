class Solution {
public:
    int myAtoi(string s) {
        string num="";
        int signs=0;
        bool positive=true; 
        long long ans=0;
        int n = s.size();
        for(int i=0;i<n;i++) {
            char ch=s[i];
            if(ch==' ' && signs==1) break;
            if(num=="" && ch==' ') continue;
            if(num=="" && ch== '+' && signs==0) {
                positive=true;
                signs++;
                continue;
            }
            if(num=="" && ch== '-' && signs==0) {
                positive=false;
                signs++;
                continue;
            }
            if((ch == '-' || ch == '+') && signs==1) break;
            if((num=="" || num=="+" || num=="-") && ch=='0') {
                num+=ch;
                continue;
            }
            if(isdigit(ch)==true) {
                num += ch;
                continue;
            }
            else break;
        }
        string newnum="";
        int x=num.size();
        for(int i=0;i<x;i++) {
            char ch=num[i];
            if(newnum=="" && ch=='0') continue;
            else newnum+=ch;
        }
        cout<<newnum;
        if(newnum.empty()) return 0;
        int newnum_size=newnum.size();
        for (int j=0;j<newnum_size;j++) {
            char ch=newnum[j];
            if (ans>214748364 || (ans==214748364&& ch>'7')) return positive?INT_MAX:INT_MIN;
            ans = ans * 10 + (ch - '0');
        }
        if (positive==false) ans=ans*-1;

        if(positive==true && ans>INT_MAX) return INT_MAX;
        if(positive==false && ans<INT_MIN) return INT_MIN;

        return ans;
    }
};