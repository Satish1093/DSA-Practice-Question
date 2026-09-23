/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node*slow =  head;
        Node*fast = head;
        int count =0;
        while(fast != NULL && fast->next!= NULL){
            fast =  fast->next->next;
            slow =  slow->next;
            if(slow == fast){
            count = 1;
            Node*temp = slow->next;
            while(temp != slow){
                count++;
                temp =  temp->next;
            }
        
        return count;
            }
        }
        return 0;
    }
};