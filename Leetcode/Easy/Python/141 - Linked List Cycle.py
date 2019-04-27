# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution1(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """

        previousNodes = []
        try:
            while head.next is not None:
                if head.next in previousNodes:
                    return True
                previousNodes.append(head)
                head = head.next
            return False
        except:
            return False
