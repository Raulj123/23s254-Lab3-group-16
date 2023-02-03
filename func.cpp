#include "header.h"

void header::readMe(ifstream& file){
  string line;
  while(getline(file,line)){
    cout << line << "\n";
  }
}
