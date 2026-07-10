class Solution {
public:
     bool isPrime(int num){
        if(num<=1)return false;
        for(int i =2;i*i<=num;i++){
            if(num%i == 0)
                return false;

            }
            return true;
        }

    
    vector<int> closestPrimes(int left, int right) {
        vector<int>primes;
        for(int i =left;i<=right;i++){
            if(isPrime(i))
            primes.push_back(i);

        }
         if (primes.size() < 2)
            return {-1, -1};

        int diff = INT_MAX;
        vector<int> ans = {-1, -1};

        for (int i = 1; i < primes.size(); i++) {
            if (primes[i] - primes[i - 1] < diff) {
                diff = primes[i] - primes[i - 1];
                ans = {primes[i - 1], primes[i]};
            }
        }

        return ans;

        
    }
};