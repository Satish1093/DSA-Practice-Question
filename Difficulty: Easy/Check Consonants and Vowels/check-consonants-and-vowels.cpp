class Solution {
  public:
    void checkString(string& s) {
        int v = 0;
        int c = 0;
        for(int i= 0;i<s.length();i++){
            if(s[i] == 'a' || s[i] == 'e'||s[i] == 'i'|| s[i] =='o'||s[i] =='u'){
                v++;
            }
            else{
                c++;
            }
        }
        if(v>c){
            cout<<"Yes"<<endl;
        }
        else if(v<c){
            cout<<"No"<<endl;
        }else{
            cout<<"Same"<<endl;
        }


        
    }
};