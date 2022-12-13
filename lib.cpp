
#include<iostream>
using namespace std;
#include "lib.h"
float max(float array[], int dimensione){
    int i=0;
    for (; i<dimensione; i++){
        if (array[0]>array[i]){
        }
        else{
            array[0]=array[i];
        }
    }
    return array[0];
}


