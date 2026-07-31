class Solution {
public:
    int minimumPushes(string word) {
        int freq[26]={0};
        for (char ch: word){
            freq[ch-'a']++;
        }
        sort(freq,freq+26,greater<int>());
        int count=0;
        int ans=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0) break;
            else if(i<=7){ ans=ans+freq[i]*1; continue;}
            else if(i<=15){ ans=ans+freq[i]*2; continue;}
            else if(i<=23){ ans=ans+freq[i]*3; continue;}
            else { ans=ans+freq[i]*4; continue; }
        }
        return ans;
    }
};