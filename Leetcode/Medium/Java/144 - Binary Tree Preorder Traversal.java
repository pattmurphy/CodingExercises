import java.util.List;
import java.util.ArrayList;

/* 
// Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
 */

class BinaryTreePreorderTraversal {
    ArrayList<Integer> preOrder = new ArrayList<Integer>();
    public List<Integer> preorderTraversal(TreeNode root) {
        if(root != null){
            preOrder.add(root.val);
            preorderTraversal(root.left);
            preorderTraversal(root.right);
        }
        return preOrder;
    }
    public static void main(String[] args){

        BinaryTreePreorderTraversal solution = new BinaryTreePreorderTraversal();

        TreeNode n0 = new TreeNode(1);
        TreeNode n1 = new TreeNode(2);
        TreeNode n2 = new TreeNode(3);
        n0.right = n1;
        n1.left = n2;
        System.out.println(solution.preorderTraversal(n0));
    }
}
