//
//  linkedList.cpp
//  DS_Mid-term Project Linked List
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//

#include <iostream>
#include <string.h>
#include "linkedList.h"
using namespace std;
UnsortedType::UnsortedType(){ //Constructor, O(1)
    length = 0;
    start = NULL;
    end = NULL;
}
void UnsortedType::insertRecord(int x, int y, string name){ //O(1)
    Node* temp = new Node;
    temp->dataX = x;
    temp->dataY = y;
    temp->dataName = name;
    
    if (start == NULL)
    {
        start = temp;
        end = temp;
    }
    else
    {
        end->next = temp;
        end = temp;
    }
    length++;
}

int UnsortedType::getLength() const{//O(1)
    return length;
}
void UnsortedType::show(){//O(n)
    Node* temp = start;
    while (temp != NULL){
        cout<<temp->dataX<<", "<<temp->dataY<<", "<<temp->dataName<<endl;
        temp = temp->next;
    }
}
void UnsortedType::del(int x, int y){
    Node *current = new Node;
    Node *previous = new Node;
    current = start;
    if (start->dataX == x && start->dataY == y)
    {
        start = start->next;
    }
    else if (end->dataX == x && end->dataY == y)
    {
        for (int i = 0; i < length - 1; i++)
        {
            previous = current;
            current = current->next;
        }
        end = previous;
        previous->next = NULL;
        length--;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (current->dataX == x && current->dataY == y)
            {
                previous->next = current->next;
                length--;
                break;
            }
            else
            {
                previous = current;
                current = current->next;
            }
        }
    }
}

void UnsortedType::del(string name)
{
    Node *current = new Node;
    Node *previous = new Node;
    current = start;
    if (start->dataName == name)
    {
        start = start->next;
    }
    else if (end->dataName == name)
    {
        for (int i = 0; i < length - 1; i++)
        {
            previous = current;
            current = current->next;
        }
        end = previous;
        previous->next = NULL;
        length--;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (current->dataName == name)
            {
                previous->next = current->next;
                length--;
                break;
            }
            else
            {
                previous = current;
                current = current->next;
            }
        }
    }
}

void UnsortedType::search(string name)
{
    Node *current = new Node;
    Node *previous = new Node;
    current = start;
    for (int i = 0; i < length; i++)
    {
        if (current->dataName == name)
        {
            cout << "City: " << current->dataName << ", x: " << current->dataX << ", y: " << current->dataY << endl;
        }
        previous = current;
        current = current->next;
    }
}

void UnsortedType::search(int x, int y)
{
    Node *current = new Node;
    Node *previous = new Node;
    current = start;
    for (int i = 0; i < length; i++)
    {
        if (current->dataX == x && current->dataY == y)
        {
            cout << "City: " << current->dataName << ", x: " << current->dataX << ", y: " << current->dataY << endl;
        }
        previous = current;
        current = current->next;
    }
}

void UnsortedType::search(int distance, int x, int y)
{
    Node *current = new Node;
    Node *previous = new Node;
    current = start;
    for (int i = 0; i < length; i++)
    {
        if (sqrt(pow(current->dataX - x,2) + pow(current->dataY - y, 2)) <= distance)
        {
            cout << "City: " << current->dataName << ", x: " << current->dataX << ", y: " << current->dataY << endl;
        }
        previous = current;
        current = current->next;
    }
}
