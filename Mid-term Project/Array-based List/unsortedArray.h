//
//  unsortedArray.h
//  DS_Mid-term Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//
#include "dictionary.h"
#include "keyValuePair.h"
#ifndef unsortedArray_h
#define unsortedArray_h

// Dictionary implemented with an unsorted array-based list
template <typename Key, typename E>
class UALdict : public Dictionary<Key, E> {
private:
    AList<KVpair<Key,E> >* list;
public:
    // Constructor
    UALdict(int size=defaultSize){
        list = new AList<KVpair<Key,E> >(size);
    }
    ~UALdict() { delete list; }         // Destructor
    void clear() { list->clear(); }     // Reinitialize

    // Insert an element: append to list
    void insert(const Key&k, const E& e) {
        KVpair<Key,E> temp(k, e);
        list->append(temp);
    }

    // Use sequential search to find the element to remove
    E remove(const Key& k) {
        E temp = find(k); // "find" will set list position
        if(temp != NULL)
            list->remove();
        return temp;
    }
    
    E removeAny() { // Remove the last element
        Assert(size() != 0, "Dictionary is empty");
        list->moveToEnd();
        list->prev();
        KVpair<Key,E> e = list->remove();
        return e.value();
    }
    // Find "k" using sequential search
    E find(const Key& k) const {
        for(list->moveToStart(); list->currPos() < list->length(); list->next()) {
            KVpair<Key,E> temp = list->getValue();
            if (k == temp.key()){
                return temp.value();
            }
        }
        return NULL; // "k" does not appear in dictionary
    }

    // Return list size
    int size(){ return list->length(); }
};

#endif /* unsortedArray_h */
