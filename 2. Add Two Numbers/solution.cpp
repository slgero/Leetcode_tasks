/*
  Runtime: 20 ms, faster than 99.22% of C++ online submissions for Add Two Numbers.
  Memory Usage: 13.7 MB, less than 56.62% of C++ online submissions for Add Two Numbers.
*/

void GiveResult(ListNode* res, ListNode* l1, ListNode* l2, int x){
    int sum = x;
    l1 ? sum += l1->val : sum += 0;
    l2 ? sum += l2->val : sum += 0;
    if(!l1 && !l2 && x == 0)
        return;
    ListNode* tmp = new ListNode(1);
    res->next = tmp;
    if (!l1 && !l2)
        return;
    l1 ? l1 = l1->next : l1;
    l2 ? l2 = l2->next : l2;

    if (sum > 9){
        res->next->val = sum - 10;
        GiveResult(res->next, l1, l2, 1);
    } else {
        res->next->val = sum;
        GiveResult(res->next, l1, l2, 0);
    }
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(9);
        GiveResult(res, l1, l2, 0);
        return res->next;
    }
};
