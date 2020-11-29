//
//  linkedList.h
//  DS_Mid-term Project Linked List
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//

#ifndef linkedList_h
#define linkedList_h
#include <iostream>
#include <string.h>
#include "Node.h"
using namespace std;
class UnsortedType {
public:
    UnsortedType();
    void makeEmpty();
    int getLength() const;
    void insertRecord(int x, int y, string name);
    void del(int x, int y);
    void del(string name);
    void search(int x, int y);
    void search(string name);
    void search(int distance, int x, int y);
    void show();
private:
    int length;
    Node* start;
    Node* end;
};
#endif /* linkedList_h */
