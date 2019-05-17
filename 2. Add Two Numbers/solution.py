#   Runtime: 72 ms, faster than 98.68% of Python3 online submissions for Add Two Numbers.
#   Memory Usage: 13.5 MB, less than 5.36% of Python3 online submissions for Add Two Numbers.

def create_result(res, remainder, l1=None, l2=None):
    sum = remainder
    if l1: sum += l1.val
    if l2: sum += l2.val
    if not l1 and not l2 and remainder == 0:
        return
    res.next = ListNode(1)
    if not l1 and not l2:
        return
    l1 = l1.next if l1 else l1
    l2 = l2.next if l2 else l2
    if sum > 9:
        res.next.val = sum - 10
        create_result(res.next, 1, l1, l2);
    else:
        res.next.val = sum;
        create_result(res.next, 0, l1, l2);
        
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        res = ListNode(1)
        create_result(res, 0, l1, l2);
        return res.next
