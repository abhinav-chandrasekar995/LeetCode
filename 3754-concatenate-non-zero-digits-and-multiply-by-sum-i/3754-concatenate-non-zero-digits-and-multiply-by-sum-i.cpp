class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans;
        string str=to_string(n);
        string new_str="";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0') continue;
            else new_str+=str[i];
        }
        if (new_str=="")
        {
            n=stoi(str);
        }
        else n=stoi(new_str);
        int sum=0;
        long long x=n;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        x=x*sum;
        return x;
    }
};