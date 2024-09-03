#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <string>
#include <iostream>

using namespace std;

class IntegerSet {
private:
    bool set[101];

public:
    //constructores
    IntegerSet();
    IntegerSet(const int arr[], int size);

    //metodos
    IntegerSet unionOfSets(const IntegerSet& other) const;
    IntegerSet intersectionOfSets(const IntegerSet& other) const;
    void insertElement(int k);
    void deleteElement(int k);
    string toString() const;
    bool isEqualTo(const IntegerSet& other) const;
};

#endif // INTEGERSET_H
