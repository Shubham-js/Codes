ListNode* reverseKGroup(ListNode* head, int k) {
  if (k <= 1)
    return head;

  ListNode * nextHead = head;
  for (int i = 0; i < k; ++i) {
    if (!nextHead)
      return head;
    nextHead = nextHead->next;
  }

  ListNode * prev = head;
  ListNode * next = head->next;
  for (int i = 0; i < k - 1; ++i) {
    ListNode * tmp = next->next;
    next->next = prev;
    prev = next;
    next = tmp;
  }

  head->next = reverseKGroup(nextHead, k);
  return prev;
}