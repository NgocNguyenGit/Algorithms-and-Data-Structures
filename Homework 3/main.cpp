//
//  main.cpp
//  DS_Homework 3_1
//
//  Created by Nguyen Le Khanh Ngoc on 30/11/2020.
//

#include <iostream>
#include "dictionary.h"
using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Stack implementation:"<<endl;
    Dictionary s;
    s.push("Marisa Bradshaw",119745);
    s.push("Zak Ortega", 313592);
    s.push("Elisa Guerrero", 933665);
    s.push("Danika Smyth", 158972);
    s.push("Shanae Guest", 234521);
    s.push("Morris Farmer", 734133);
    s.pop();
    s.pop();
    s.pop();
    cout<<endl;
    cout<<"Queue implementation:"<<endl;
    Dictionary q;
    q.enqueue("Helsinki", 10200);
    q.enqueue("Kokkola", 67100);
    q.enqueue("Joensuu", 80100);
    q.enqueue("Oulu", 90100);
    q.enqueue("Rovaniemi", 99100);
    q.enqueue("Kemi", 95200);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    return 0;
}
