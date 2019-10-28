
// Assignment 5 CS303
// Library
#include <iostream>
using namespace std;

//Q3:
void Binary_Tree(BTNode<int>* current_node, int& sum){
    
    if(current_node != NULL) {
        sum +=current_node->data();
        if(current_node->left != NULL) {Binary_Tree(current_node->left,sum);}
        if(current_node->right != NULL) {Binary_Tree(current_node->right,sum);}
    }
}
int w_sum(BTNode<int>* root){
    
    int sum = 0;
    if (root == NULL){
        std::cout << "The tree is empty\n";
        return 0;
    }
    
    Binary_Tree(root,sum);
    return sum;
}


//Q4:
bool isBST(BTNode<itemtype>* current_node){
    
    if(current_node->left->data() >= current_node->data()) {return false;}
    else{return isBST(current_node->left);}
    if (current_node->right != NULL && current_node->right->data() <= current_node->data())
       {return false;}
    else{return isBST(current_node->right);}
}


int main()
{
    return 0;
}
