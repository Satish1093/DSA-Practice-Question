class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n =  fruits.size();
         int maxLen = 0;
        int lastfruit = -1,secondlastfruit=-1;
        int currcount =0,lastfruitstrek = 0;
        for(int  fruit : fruits){
            if(fruit == lastfruit || fruit ==  secondlastfruit){
                currcount ++;
            }
             else{
                    currcount = lastfruitstrek +1;
                }
             if (fruit == lastfruit) {
                lastfruitstrek++;
            } else {
                lastfruitstrek = 1;
                secondlastfruit = lastfruit;
                lastfruit = fruit;
        
        }
        maxLen = max(maxLen,currcount);
        }
return maxLen;
        
    }
};