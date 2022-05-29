// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_



template<typename T>
  class BST
  {
  public:
    struct Node
    {
      int counter;
      T value;
      NodeT *left;
      NodeT *right;
    };
    
  private:
    NodeT* root;
    NodeT* AddNodeT(NodeT* root, T date){
        if(root==nullptr){
          root=new Node;
          root->counter = 1;
          root->value = date;
          root>right=nullptr;
          root->left=nullptr;
        }else if(date<root->value) root->left= AddNodeT(root->left,value);
        else if(date>root->value) root->right = AddNodeT(root->right,value);
        else root->counter;
        return root;
        }
    
    int SearchNodeT(NodeT* root, T date) {
        if (root == nullptr) {
            return 0;
        } else if (root->value == date) {
            return root->counter;
        } else if (root->value > date) {
            return SearchNodeT(root->left, date);
        } else {
            return SearchNodeT(root->rigth, date);
        }
    }
    
    int HeightTreeT(NodeT* root) {
        if (root == nullptr) {
            return 0;
        } else {
            int left = HeightTreeT(root->left);
            int right = HeightTreeT(root->right);
            if (right < left) {
                return ++left;
            } else {
                return ++right;
            }
        }
    }
 public:
    BST() {
        root = nullptr;
    }
    void Add_NodeT(T date) {
        root = AddNodeT(root, date);
    }
    int DepthT() {
        return HeightTreeT(root) - 1;
    }
    int SearchT(T date) {
        return searchNode(root, date);
    }

};
        
      
#endif  // INCLUDE_BST_H_
