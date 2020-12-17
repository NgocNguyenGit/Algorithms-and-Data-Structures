//
//  binaryTree.cpp
//  DS_Final Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 17/12/2020.
//

#include <iostream>
#include <queue>
#include <stack>
#include "binaryTree.h"
using namespace std;
//Constructor
Binary_tree::Binary_tree() {
    root = NULL;
}

//Destructor
Binary_tree::~Binary_tree() {
    
}

bool Binary_tree::insert(int value){
    Node *before = NULL;
    Node *after = this->root;
    
    while (after != NULL){
        before = after;
        
        
        if (value < after->key_value) {         //Is new node in the left tree
            after = after->left;
        } else if (value > after->key_value){   //Is new node in the right tree
            after = after->right;
        } else {
            return false;                       //Exist same value
        }
    }
    
    Node* newNode = new Node();
    newNode->key_value = value;
    
    if (this->root == NULL){                    //Tree is empty
        this->root = newNode;
    } else {
        if (value < before->key_value){
            before->left = newNode;
        } else {
            before->right = newNode;
        }
    }
    return true;
}

void Binary_tree::DFS_preOrder(Node *parent){
    if (parent != NULL){
        cout<<parent->key_value<<" ";
        DFS_preOrder(parent->left);
        DFS_preOrder(parent->right);
    }
}

void Binary_tree::DFS_inOrder(Node *parent){
    if (parent != NULL){
        DFS_inOrder(parent->left);
        cout<<parent->key_value<<" ";
        DFS_inOrder(parent->right);
    }
}

void Binary_tree::DFS_postOrder(Node *parent){
    if (parent != NULL){
        DFS_postOrder(parent->left);
        DFS_postOrder(parent->right);
        cout<<parent->key_value<<" ";
    }
}

void Binary_tree::DFS_stack(Node *parent){      //Depdth-first using a stack
    if (parent == NULL){
        return;
    }
    
    //Create an empty stack for DFS
    stack<Node *> s;
    //Push root and initialise height
    s.push(parent);
    
    while (s.empty() == false){
        Node *node = s.top();
        s.pop();
        cout<<node->key_value<<" ";
        
        //Push left tree
        if (node->left != NULL){
            s.push(node->left);
        }
        
        //Push right tree
        if (node->right != NULL){
            s.push(node->right);
        }
    }
    
}

void Binary_tree::BFS(Node *parent){            //Breadth-first using a queue
    if (parent == NULL){
        return;
    }
    //Create an empty queue for BFS
    queue<Node *> q;
    //Enqueue root and initialise height
    q.push(parent);
    
    while (q.empty() == false){
        //Print front of queue and remove it from queue
        Node *node = q.front();
        cout<<node->key_value<<" ";
        q.pop();
        
        //Enqueue left tree
        if (node->left != NULL){
            q.push(node->left);
        }
        
        //Enqueue right tree
        if (node->right != NULL){
            q.push(node->right);
        }
    }
}

//Utility function to create a new tree node
Node* newNode (int key_value){
    Node *temp = new Node;
    temp->key_value = key_value;
    temp->left = temp->right = NULL;
    return temp;
}
