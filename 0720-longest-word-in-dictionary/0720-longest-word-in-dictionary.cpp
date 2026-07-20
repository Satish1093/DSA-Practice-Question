class Solution {
public:

    struct Node{
        Node* child[26];
        bool eow;

        Node(){
            for(int i=0;i<26;i++)
                child[i]=nullptr;
            eow=false;
        }
    };

    Node* root=new Node();
    string ans="";

    void insert(string word){

        Node* curr=root;

        for(char ch:word){

            int idx=ch-'a';

            if(curr->child[idx]==nullptr)
                curr->child[idx]=new Node();

            curr=curr->child[idx];
        }

        curr->eow=true;
    }

    void dfs(Node* root,string &temp){

        if(root==nullptr) return;

        for(int i=0;i<26;i++){

            if(root->child[i]!=nullptr && root->child[i]->eow){

                temp.push_back(char(i+'a'));

                if(temp.size()>ans.size())
                    ans=temp;

                dfs(root->child[i],temp);

                temp.pop_back();
            }
        }
    }

    string longestWord(vector<string>& words) {

        for(string &word:words)
            insert(word);

        string temp="";

        dfs(root,temp);

        return ans;
    }
};