#include "UserNetwork.h"
#include <iostream>

void flush_stream(std::istream& stream)
{
    stream.clear();
    stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main(){
  
  bool loop = true;
  while(loop){
    std::cout << "Welcome to VisageLivre!\nSelect an option to begin:\n(1) Create New User\n(2) Login Existing User\n(0)Quit\n";
    int selection;
    std::cin >> selection;
    if(selection == 1){
      loop = false;
    }
    else if(selection == 2){
      loop = false;
    }
    else if(selection == 0){
      loop = false;
      return 0;
    }
    else{
      std::cout << "That is not a valid selection." << std::endl << std::endl;
    }
    flush_stream(std::cin);
  }
  return 0;
}

