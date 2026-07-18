class Solution {
public:
    string longestPalindrome(string s) {
        int start=0,maxlen=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int>oddcheck=expand(i,i,s);
            vector<int>evencheck=expand(i,i+1,s);
            if(oddcheck[1]>evencheck[1])
            {
                maxlen=max(maxlen,oddcheck[1]);
                if(maxlen==oddcheck[1])
                {
                    start=oddcheck[0];
                }
            }
            if(evencheck[1]>oddcheck[1])
            {
                maxlen=max(maxlen,evencheck[1]);
                if(maxlen==evencheck[1])
                {
                    start=evencheck[0];
                }
            }
        }
        return s.substr(start,maxlen);
    }
    vector<int> expand(int a,int b,string &s)
    {
        if(a==b && a==0) return {0,1};
        if(a==0 && b==1 && s[a]==s[b]) return {0,2};
        int i=a,j=b;
        int start=-1;
        int length=-1;
        while(i>=0 && j<s.size() && (s[i]==s[j]))
        {
            i--;
            j++;
        }
        length=j-i-1;
        start=i+1;
        return {start,length};
    }
};
/*
 int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int odd=oddexpand(s,i);
            int even=evenexpand(s,i);
            int intermediate=max(odd,even);
            ans=max(ans,intermediate);
        }
        return ans;
    }
    int oddexpand(string &s,int i)
    {
        if(i==0) return 1;
        if(i==s.size()-1) return 1;
        int a=i,b=i;
        while(a>=0 && b<s.size() && (s[a]==s[b]))
        {
            a--; b++;
        }
        return b-a
    }
    int evenexpand(string &s,int i)
    {
        if(i==0) return 1;
        if(i==s.size()-1) return 1;
        int a=i,b=i+1;
        int evenans=1;
        while(a>=0 && b<s.size() && (s[a]==s[b]))
        {
            a--; b++;
            evenans+=2;
        }
        return evenans;
    */