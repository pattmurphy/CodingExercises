using System;

namespace _24___Swap_Nodes_in_Pairs
{
    class Program
    {
        public class ListNode {
            public int val;
            public ListNode next;
            public ListNode(int val=0, ListNode next=null) {
                this.val = val;
                this.next = next;
            }
        }
        public class Solution {
            public ListNode SwapPairs(ListNode head) {
                if(head == null || head.next == null){
                    return head;
                }
                
            }
        }
        static void Main(string[] args)
        {
            ListNode n00 = new ListNode(1);
            ListNode n01 = new ListNode(2);
            n00.next = n01;
            ListNode n02 = new ListNode(3);
            n01.next = n02;
            ListNode n03 = new ListNode(4);
            n02.next = n03;
            ListNode n04 = new ListNode(5);
            n03.next = n04;

            Solution solution = new Solution();
            solution.SwapPairs(n00);
            ListNode head = n01;
            while(head.next != null){
                Console.WriteLine(head.val);
                head = head.next;
            }
        }
    }
}
