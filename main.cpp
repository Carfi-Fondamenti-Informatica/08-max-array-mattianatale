
 #include <iostream>
 #include "lib.h"
int main(){
using namespace std;
    int dim;
    cin>> dim;
    float array[dim];
    for (int i=0; i<dim; i++){
        cin>> array[i];
    }
    cout<< max(array,dim)<< endl;
  return 0;
}
