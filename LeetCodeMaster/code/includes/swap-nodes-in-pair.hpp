

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode*next): val(x), next(next) {}
};

class Solution{
    public:
    ListNode*swapPair(ListNode*head){
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;

        while(cur->next!=nullptr && cur->next->next != nullptr){
            ListNode*tmp = cur->next;
            ListNode*tmp1 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = tmp;
            cur->next->next->next = tmp1;

            cur = cur->next->next;

        }
        return dummyHead->next;
    }

    ListNode*swapPair2(ListNode*head){
        ListNode* cur = head->next;
        ListNode* prev = head;

        while(cur->next!=nullptr && cur->next->next!=nullptr){
            // deal with head
            ListNode* tmp_cur = cur->next->next;
            ListNode* tmp_prev = cur->next;
            if(prev == head){
                
            }
            
            prev->next = cur->next;
            cur->next = prev;
            cur = tmp_cur;
            prev = tmp_prev;
        }

    }
};


