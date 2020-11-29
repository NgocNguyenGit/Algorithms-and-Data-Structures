//
//  function.hpp
//  DS_Mid-term Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//

#ifndef function_h
#define function_h
#include "unsortedArray.h"
#include <iostream>
using namespace std;

class CityDB {
private:
    int x_coor;
    int y_coor;
    string name;
public:
    // Constructor
    CityDB(int inX, int inY, string inName) {
        x_coor = inX;
        y_coor = inY;
        name = inName;
    }
    ~CityDB() {} // Destructor
    // Local data member access functions
    int getX() { return x_coor; }
    int getY() { return y_coor; }
    string getName() { return name; }
};
// Overload << operator to print CityDB records
ostream& operator << (ostream& s, CityDB* p) {
  return s << p->getX() << ", " << p->getY() << ", "
           << p->getName() << endl;
}
#endif /* function_hpp */
