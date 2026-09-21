class Solution {
public:
    int totalWaviness(int num1, int num2) {
        vector<string>aux;
        for(int i=num1; i<=num2; i++) {
            aux.emplace_back(to_string(i));
        }
        long long ans=0;
        for(string num: aux) {
            if(num.size()>2){
                for(int i=1;i<num.size()-1;i++) {
                    if((num[i-1]<num[i] && num[i]>num[i+1]) || (num[i-1]>num[i] && num[i]<num[i+1])) ans++;
                }
            }
        }
        return ans;
    }
};