class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
    int n = a.size(),m=b.size();
    int i = 0,j=0,sum1 = 0,sum2 = 0;
    a.push_back(INT_MAX);
    b.push_back(INT_MAX);
    while((i<n|| j<m)){
        if(a[i] <b[j]){
            sum1 += a[i];
            i++;
        }else if(a[i]>b[j]){
            sum2 += b[j];
            j++;
        }else{
            sum1= max(sum1,sum2)+a[i];
            sum2=sum1;
            i++,j++;
        }
    }
    return max(sum1,sum2);
        
    }
};