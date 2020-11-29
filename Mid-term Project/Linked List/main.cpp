//
//  main.cpp
//  DS_Mid-term Project Linked List
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//

#include <iostream>
#include <chrono>
#include "linkedList.h"
using namespace std;
using namespace chrono;
int main(int argc, const char * argv[]) {
    UnsortedType ust;
    //sample database
    // Get starting timepoint
    auto start = high_resolution_clock::now();
    ust.insertRecord(5,6, "Saigon");
    ust.insertRecord(7,30, "Hanoi");
    ust.insertRecord(8,20000, "Singapore");
    ust.insertRecord(-19,5, "Helsinki");
    ust.del(-19, 5);                    //delete coordinate
    ust.del("Singapore");               //delete name
    ust.search(10, 5,6);                //distance evaluate
    ust.show();                         //print all
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
  
    // Get duration. Substart timepoints to
    // get durarion. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
    return 0;
}
