//
//  dictionary.h
//  DS_Homework 3_1
//
//  Created by Nguyen Le Khanh Ngoc on 30/11/2020.
//

#ifndef dictionary_h
#define dictionary_h
#include <string.h>
#include <iostream>
using namespace std;
// The Dictionary abstract class.
class  Dictionary {
private:
    int element[50];
    string key[50];
    int front = -1;
    int rear = -1;
public:
    Dictionary (); // constructor

    // Insert a record
    void push (string key, int element);
    void enqueue (string key, int element);
    // Remove and return a record.
    void pop ();
    void dequeue();

};

#endif /* dictionary_h */
