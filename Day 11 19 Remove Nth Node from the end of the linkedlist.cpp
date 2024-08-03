class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* dummy = new ListNode(0);
      dummy->next = head;
      ListNod19 Remove Nth Node from the end of the linkedliste* first = dummy;
      ListNode* second = dummy;

      for( int i = 0; i <= n; i++ )
      first = first->next;

      while(first){
        second = second->next;
        first = first->next;
      }

      ListNode* todelete = second->next;
      second->next = second->next->next;
      delete todelete;

      ListNode* new_head = dummy->next;
      delete dummy;
      return new_head;
    }
};