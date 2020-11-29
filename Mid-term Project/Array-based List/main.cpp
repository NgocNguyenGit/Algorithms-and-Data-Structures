//
//  main.cpp
//  DS_Mid-term Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//

#include <iostream>
#include <string.h>
#include <math.h>
#include <chrono>
using namespace std;
using namespace chrono;
// Use an array-based list
#include "aList.h"
// Implement a dictionary with an unsorted array-based list
#include "unsortedArray.h"
// Implementation for database class entry with x coordinate, y coordinate, city name
#include "function.h"
auto start = high_resolution_clock::now();
// xDict organizes CityDB records by x coordinate
UALdict<int, CityDB*> xDict;
// yDict organizes CityDB records by y coordinate
UALdict<int, CityDB*> yDict;
// namedict organizes CityDB records by name
UALdict<string, CityDB*> nameDict;
CityDB *foo[10], *findx, *findy, *findname, *deletex, *deletey, *deletename;
int newSize = 0;
char isCont;
int x;
int y;
string name;
float dist;
float dist_result;
void insert_function(){
    //insert
    for (int i = 0; i < newSize+1; i++){
        cout<<"Enter x y name: ";
        cin>>x>>y>>name;
        foo[i] = new CityDB(x,y,name);
        
        xDict.insert(foo[i]->getX(), foo[i]);
        yDict.insert(foo[i]->getY(), foo[i]);
        nameDict.insert(foo[i]->getName(), foo[i]);
        newSize++;
        cout<<"Continue? [y/n]: ";
        cin>>isCont;
        
        if (isCont == 'n'){
            break;
        }
    }
}

void find_function(int findWhat){
    cout<<"Search function...."<<endl;
    cout<<"1–x      2–y     3–name"<<endl;
    cout<<"Search what? [1/2/3]: ";
    cin>>findWhat;
    if (findWhat == 1){
        //x
        cout<<"Find x: ";
        cin>>x;
        findx = xDict.find(x);
        if (findx != NULL){
            cout << findx;
        } else {
            cout << "NULL X COORDINATE.\n";
        }
    } else if (findWhat == 2){
        //y
        cout<<"Find y: ";
        cin>>y;
        findy = yDict.find(y);
        if (findy != NULL){
            cout << findy;
        } else {
            cout << "NULL Y COORDINATE.\n";
        }
    } else {
        //name
        cout<<"Find name: ";
        cin>>name;
        findname = nameDict.find(name);
        if (findname != NULL){
            cout << findname;
        } else {
            cout << "NULL NAME.\n";
        }
    }
}
void delete_function(int deleteWhat){
    cout<<"Delete function...."<<endl;
    cout<<"1–x      2–y     3–name"<<endl;
    cout<<"Delete what? [1/2/3]: ";
    cin>>deleteWhat;
    //x
    if(deleteWhat == 1){
        cout<<"Delete x: ";
        cin>>x;
        deletex = xDict.remove(x);
        if (deletex != NULL){
            cout<<"Deleted ";
            cout << deletex;
        } else {
            cout << "NULL X.\n";
        }
    } else if (deleteWhat == 2){
        //y
        cout<<"Delete y: ";
        cin>>y;
        deletey = yDict.remove(y);
        if (deletey != NULL){
            cout<<"Deleted ";
            cout << deletey;
        } else {
            cout << "NULL Y.\n";
        }
    } else {
        //name
        cout<<"Delete name: ";
        cin>>x;
        deletename = nameDict.remove(name);
        if (deletex != NULL){
            cout<<"Deleted ";
            cout << deletename;
        } else {
            cout << "NULL NAME.\n";
        }
    }
}
void print_function(){
    cout<<"Print city database...."<<endl;
    for (int i = 0; i < newSize; i++){
        cout<<foo[i]->getX()<<", "<<foo[i]->getY()<<", "<<foo[i]->getName()<<endl;
    }
}
void distance_function(){
    cout<<"Distance function...."<<endl;
    cout<<"Enter distance: ";
    cin>>dist;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    for (int i = 0; i < newSize; i++){
        dist_result = (float)sqrt(powf((float)x-foo[i]->getX(),2)+powf((float)y-foo[i]->getY(),2));
        if (dist_result <= dist){
            cout<<foo[i]->getX()<<", "<<foo[i]->getY()<<", "<<foo[i]->getName()<<endl;
        }
    }
}
int main(int argc, const char * argv[]) {
    // Get starting timepoint
    auto start = high_resolution_clock::now();
    //insert
    insert_function();
    cout<<"*******************************"<<endl;
    //print
    print_function();
    cout<<"*******************************"<<endl;
    //find coordinates (int type)
    int findWhat = 0;
    find_function(findWhat);
    cout<<"*******************************"<<endl;
    //delete coordinates (int type)
    int deleteWhat = 0;
    delete_function(deleteWhat);
    cout<<"*******************************"<<endl;
    //distance
    distance_function();
    cout<<"*******************************"<<endl;
    
    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    // Get duration. Substart timepoints to
    // get durarion. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;

    return 0;
}
