//
//  keyValuePair.h
//  DS_Mid-term Project 1
//
//  Created by Nguyen Le Khanh Ngoc on 29/11/2020.
//

#ifndef keyValuePair_h
#define keyValuePair_h
// Container for a key-value pair
template <typename Key, typename E>
class KVpair {
private:
    Key k;
    E e;
public:
    // Constructors
    KVpair() {}
    KVpair(Key kval, E eval)
    { k = kval; e = eval; }
    KVpair(const KVpair& o)  // Copy constructor
    { k = o.k; e = o.e; }

    void operator =(const KVpair& o) // Assignment operator
    { k = o.k; e = o.e; }

    // Data member access functions
    Key key() { return k; }
    void setKey(Key ink) { k = ink; }
    E value() { return e; }
};

#endif /* keyValuePair_h */
