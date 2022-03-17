def addTwoNumbers(l1, l2):
    carry = 0
    node = result = ListNode(0)
    while l1 != None or l2 != None or carry != 0:
        fstValue = l1.val if l1 else 0
        secValue = l2.val if l2 else 0
        carry, sum = divmod(fstValue + secValue + carry, 10)
        node.next = ListNode(sum)
        node = node.next
        l1 = l1.next if l1 else None
        l2 = l2.next if l2 else None

    return result.next