//
//  aList.h
//  DS_Mid-term Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//
#include "list.h"
#include <assert.h>
const int defaultSize = 255; // Default size
// Assert: If "val" is false, print a message and terminate
// the program
void Assert(bool val, string s) {
    if (!val) { // Assertion failed -- close the program
        cout << "Assertion Failed: " << s << endl;
        exit(-1);
    }
}
#ifndef aList_h
#define aList_h
template <typename E>   // Array-based list implementation
class AList : public List<E> {
private:
    int maxSize;        // Maximum size of list
    int listSize;       // Number of list items now
    int curr;           // Position of current element
    E* listArray;       // Array holding list elements

public:
    AList(int size=defaultSize) {       // Constructor
        maxSize = size;
        listSize = curr = 0;
        listArray = new E[maxSize];
    }

    ~AList() { delete [] listArray; }   // Destructor

    void clear() {                      // Reinitialize the list
        delete [] listArray;            // Remove the array
        listSize = curr = 0;            // Reset the size
        listArray = new E[maxSize];     // Recreate array
    }

    void append(const E& it) {       // Append "it"
        Assert(listSize < maxSize, "List capacity exceeded");
        listArray[listSize++] = it;
    }
    

    // Remove and return the current element.
    E remove() {
        Assert((curr>=0) && (curr < listSize), "No element");
        E it = listArray[curr];                 // Copy the element
        for(int i=curr; i<listSize-1; i++){     // Shift them down
            listArray[i] = listArray[i+1];
        }
        listSize--;                             // Decrement size
        return it;
    }
    void prev() { if (curr != 0) curr--; }       // Back up
    void next() { if (curr < listSize) curr++; } // Next

    void moveToStart() { curr = 0; }            // Reset position
    void moveToEnd() { curr = listSize; }       // Set at end
       
    // Return list size
    int length() const  { return listSize; }

    // Return current position
    int currPos() const { return curr; }

    const E& getValue() const {                 // Return current element
        Assert((curr>=0)&&(curr<listSize),"No current element");
        return listArray[curr];
    }
};

#endif /* aList_h */
