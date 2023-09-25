class Solution{
    public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(): val(0), next(nullptr){}
        ListNode(int x): val(x), next(nullptr){}
        ListNode(int x, ListNode *next): val(x), next(next){}
    };
    ListNode* reverseList(ListNode* head){
        ListNode* tmp;
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(cur){
            tmp = cur->next;
            cur->next = prev;

            cur = tmp;
            prev = cur;
        }
        return prev;

    }
};