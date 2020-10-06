using System;

namespace _160___Intersection_of_Two_Linked_Lists
{
    class Program
    {
        public class ListNode
        {
            public int val;
            public ListNode next = null;
            public ListNode(int x) { val = x; }
        }
        
        public class Solution
        {
            public ListNode GetIntersectionNode(ListNode headA, ListNode headB)
            {
                ListNode currentNodeA = headA;
                while(currentNodeA != null)
                {
                    ListNode currentNodeB = headB;
                    while(currentNodeB != null)
                    {
                        if(currentNodeA == currentNodeB)
                        {
                            return currentNodeA;
                        }
                        currentNodeB = currentNodeB.next;
                    }
                    currentNodeA = currentNodeA.next;
                }
                return null;
            }
        }
        static void Main(string[] args)
        {
            Solution solution = new Solution();
            ListNode headA1 = new ListNode(1);
            headA1.next = new ListNode(2);
            ListNode headB1 = new ListNode(9);
            headB1.next = headA1.next;
            Console.WriteLine(solution.GetIntersectionNode(headA1, headB1).val);
        }
    }
}
