class Solution {
  public:
    int transform(string &s1, string &s2) {
  
    int ans = 0;
    if(s1.size() != s2.size())return -1;
   unordered_map<char ,int>mp;
   for(auto ele : s1)mp[ele]++;
   for(auto ele :s2){
       if(!--mp[ele])mp.erase(ele);
       
   }
   if(mp.size())return -1;
   int i= s1.size()-1,j=s2.size()-1;
        while(i>=0 &&j>= 0){
            if(s1[i] == s2[j]) i--,j--;
            else ans++,i--;
        }
        return ans;
    }
};
