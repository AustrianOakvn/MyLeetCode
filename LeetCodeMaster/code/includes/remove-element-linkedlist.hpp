
class Solution{
  public:
    ListNode* removeElements(ListNode* head, int val){
      while(head!=NULL && head->val==val){
        ListNode* tmp = head;
        head = head->next;
        delete tmp;
      }
      ListNode* cur = head;
      while(cur != NULL && cur->next != NULL){
        if(cur->next->val == val){
          ListNode* tmp = cur->next;
          cur->next = cur->next->next;
          delete tmp;
        }else{
          cur = cur->next;
        }
      }
      return head;
    }

    ListNode* removeElements2(ListNode* head, int val){
      // Create a new dummy node
      ListNode* dummyHead = new ListNode(0);
      dummyHead->next = head;
      ListNode* cur = dummyHead;

      while(cur->next != NULL){
        if(cur->next->val == val){
          ListNode* tmp = cur->next;
          cur->next = cur->next->next;
          delete tmp;
        }
        else{
          cur = cur->next;
        }
      }
      head = dummyHead->next;
      delete dummyHead;
      return head;
    }
};
