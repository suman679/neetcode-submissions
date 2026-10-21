class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
         vector<int> answer; int i=(int)num.size()-1, carry=k; while(i>=0 || carry>0) { if(i>=0) carry+=num[i]; answer.push_back(carry%10); carry/=10; i--; } reverse(answer.begin(),answer.end()); return answer;
    }
};
