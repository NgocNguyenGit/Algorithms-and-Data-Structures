//
//  main.cpp
//  DS_Final Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 17/12/2020.
//

#include <iostream>
#include "binaryTree.h"
using namespace std;
int main(int argc, const char * argv[]) {
    Binary_tree *BST = new Binary_tree();
    BST->insert(1);
    BST->insert(2);
    BST->insert(7);
    BST->insert(3);
    BST->insert(10);
    BST->insert(5);
    BST->insert(8);
    
    cout<<"Pre Order DFS: ";
    BST->DFS_preOrder(BST->root);
    cout<<endl;
    
    cout<<"In Order DFS: ";
    BST->DFS_inOrder(BST->root);
    cout<<endl;
    
    cout<<"Post Order DFS: ";
    BST->DFS_postOrder(BST->root);
    cout<<endl;
    
    cout<<"DFS using stack: ";
    BST->DFS_stack(BST->root);
    cout<<endl;
    
    cout<<"BFS using queue: ";
    BST->BFS(BST->root);
    cout<<endl;
    return 0;
}
