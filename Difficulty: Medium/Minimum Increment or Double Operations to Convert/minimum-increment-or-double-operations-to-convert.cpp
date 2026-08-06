class Solution {
  public:
    int countMinOperations(vector<int>& arr) {
         int maxElement = INT_MIN;
        
        int n = arr.size();
        
        for(int i = 0 ; i < n ; i++)
        {
            maxElement = max(maxElement, arr[i]);
        }
        
        int decrementOperation = 0;
        int divideOperation = 0;
        
        int temp =  maxElement;
        
        for(int i = 0;i<n;i++)
        {
            int onesBit = __builtin_popcount(arr[i]);
            decrementOperation += onesBit;
            
        }
        
        while(temp > 0)
        {
            if(temp%2==0)
            {
                temp/=2;
                divideOperation++;
            }
            else
            {
                temp-=1;
            }
        }
        
        return decrementOperation + divideOperation;
        
    }
};