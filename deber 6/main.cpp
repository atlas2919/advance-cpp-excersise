#include <cstdlib>
#include <ctime>
#include "IntegerSet.h"

int main(){
    srand(time(nullptr));

    //Instancias
    IntegerSet set1;
    IntegerSet set2;

    //numeros aleatorio
    for(int i = 0; i < 10; i++){
        set1.insertElement(rand() % 101);
        set2.insertElement(rand() % 101);
    }

    cout << "Set1: " << set1.toString() << endl;
    cout << "Set2: " << set2.toString() << endl;

    IntegerSet setUnion = set1.unionOfSets(set2);
    IntegerSet setIntersection = set1.intersectionOfSets(set2);

    cout << "Union: " << setUnion.toString() << endl;
    cout << "Intersection: " << setIntersection.toString() << endl;

    if(set1.isEqualTo(set2)){
        cout << "Set 1 is equal to Set 2" << endl;
    }
    else{
        cout << "Set1 is not equal to Set 2" << endl;
    }


    return 0;
}
