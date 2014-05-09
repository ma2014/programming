#include "tree.h"

void Tree::inorder(TreeNode *CurrentNode){
    if (CurrentNode){
        inorder(CurrentNode->LeftChild);
        printf("%d",CurrentNode->data);  
        inorder(CurrentNode->RightChild);
    }
};

void Tree::preorder(TreeNode *CurrentNode){
    if (CurrentNode){
	printf("%d",CurrentNode->data);
        preorder(CurrentNode->LeftChild);  
        preorder(CurrentNode->RightChild);
    }
};

TreeNode::TreeNode(int element=NULL)
{
    data=element;
    LeftChild=NULL;
    RightChild=NULL;
};

void TreeNode::setd(int element){
    data=element;
}

int TreeNode::getd(){
    return data;
}

void TreeNode::setl(TreeNode *left){
    LeftChild=left;
}

TreeNode *TreeNode::getl(){
    return LeftChild;
}

