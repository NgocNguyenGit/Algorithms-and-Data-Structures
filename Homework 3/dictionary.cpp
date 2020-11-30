//
//  dictionary.cpp
//  DS_Homework 3_1
//
//  Created by Nguyen Le Khanh Ngoc on 30/11/2020.
//

#include <iostream>
using namespace std;
#include "dictionary.h"

Dictionary::Dictionary(){}

void Dictionary::push(string key, int element)
{
    rear++;
    this->key[rear] = key;
    this->element[rear] = element;
}

void Dictionary::pop()
{
    cout << "Name: " << this->key[rear] <<" – ID: "<<this->element[rear]<<" popped." << endl;
    rear--;
}
void Dictionary::enqueue(string key, int element){
    rear++;
    this->key[rear] = key;
    this->element[rear] = element;
}
void Dictionary::dequeue(){
    front++;
    cout << "City name: " << this->key[front] <<" – Postcode: "<<this->element[front]<< " popped." << endl;
}
