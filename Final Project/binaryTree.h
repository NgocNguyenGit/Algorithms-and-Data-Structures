//
//  binaryTree.h
//  DS_Final Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 17/12/2020.
//

#ifndef binaryTree_h
#define binaryTree_h
#include <iostream>
using namespace std;
//Class defined as a node
class Node {
private:
public:
    int key_value;
    Node *left;
    Node *right;
};

//Class binary tree implementation
class Binary_tree {
private:
public:
    Binary_tree();
    ~Binary_tree();
    
    Node *root;
    bool insert (int value);
    void DFS_preOrder (Node *parent);
    void DFS_inOrder (Node *parent);
    void DFS_postOrder (Node *parent);
    void DFS_stack (Node *parent);
    void BFS(Node *parent);
};


#endif /* binaryTree_h */
