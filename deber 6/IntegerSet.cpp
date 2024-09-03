#include "IntegerSet.h"
#include <sstream>

IntegerSet::IntegerSet(){
    for(int i = 0; i <= 101; i++){
        set[i] = false;
    }
}

IntegerSet::IntegerSet(const int arr[], int size){
    for(int i = 0; i <= 101; i++){
        set[i] = false;
    }
    for(int i = 0; i < size; i++){
        if(arr[i] >= 0 && arr[i] <= 100){
            set[arr[i]] = true;
        }
    }
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet& other) const{
    IntegerSet result;

    for(int i = 0; i < 101; i++){
        result.set[i] = (set[i] || other.set[i]);
    }
    return result;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& other) const{
    IntegerSet result;
    for(int i = 0; i < 101; i++){
        result.set[i] = (set[i] && other.set[i]);
    }
    return result;
}

void IntegerSet::insertElement(int k) {
    if(k >= 0 && k <= 100){
        set[k] = true;
    }
}

void IntegerSet::deleteElement(int k) {
    if(k >=0 && k <= 100){
        set[k] = false;
    }
}

string IntegerSet::toString() const{
    ostringstream  oss;
    bool empty = true;
    for(int i = 0; i < 101; i++){
        if(set[i]){
            if(!empty){
                oss << " ";
            }
            oss << i;
            empty = false;
        }
    }
    if(empty){
        return "---";
    }
    return oss.str();
}

bool IntegerSet::isEqualTo(const IntegerSet& other) const{
    for(int i = 0; i < 101; i++){
        if(set[i] != other.set[i]){
            return false;
        }
    }
    return true;
}
