#ifndef __USER_NETWORK_H__
#define __USER_NETWORK_H__




#include <string>
#include <iostream>
#include "User.h"
#include "LinkedList.h"

using namespace std;

class UserNetwork{

 public:
  UserNetwork(){
  }

  void addUser(string u, string p, string rn, string occ){
    User newUser = User(u,  p, rn, occ);

    LinkedList<User>::Node *n = users.getHead();

    while(n){

      if(n->value.getUsername().compare(newUser.getUsername()) == 0) 
	return;

      n = n->next;

    }

    users.insert(newUser);



  }



  void printUsers(){

    LinkedList<User>::Node *n = users.getHead();
    while(n){
      cout<< n->value.getUsername() << "\n";
      n = n->next;
    }

    

  }
  
  int getSize(){return users.getSize();}

 private:
  LinkedList<User> users;
  
};

#endif
