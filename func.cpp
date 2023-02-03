#include "header.h"

void readMe(ifstream& file){
  string line;
  while(getline(file,line)){
    cout << line;
  }
}
