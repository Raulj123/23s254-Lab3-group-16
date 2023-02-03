#include "header.h"


int main(){
    ifstream file("README.md");
    header object;
    object.readMe(file);
    return 0;
}
