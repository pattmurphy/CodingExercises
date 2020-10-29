<?php

// Definition for a binary tree node.
class TreeNode {
    public $val = null;
    public $left = null;
    public $right = null;
    function __construct($val = 0, $left = null, $right = null) {
        $this->val = $val;
        $this->left = $left;
        $this->right = $right;
    }
}

class Solution {
    /**
    * @param TreeNode $root
    * @return Integer[]
    */
    public $postorder = [];
    function postorderTraversal($root) {
        if($root != null){
            $this->postorderTraversal($root->left);
            $this->postorderTraversal($root->right);
            array_push($this->postorder, $root->val);
        }
        return $this->postorder;
    }
}

$solution = new Solution();

$n0 = new TreeNode(1);
$n1 = new TreeNode(2);
$n2 = new TreeNode(3);
$n0->right = $n1;
$n1->left = $n2;

print_r($solution->postorderTraversal($n0));

?>