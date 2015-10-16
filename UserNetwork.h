#ifndef __USER_NETWORK_H__
#define __USER_NETWORK_H__

#include <string>
#include <iostream>
#include "User.h"
#include "Wall.h"
#include "LinkedList.h"

using namespace std;

class UserNetwork{

 public:
  UserNetwork(){
  }

  void addUser(string u, string p, string rn, string occ){
    User newUser = User(u,  p, rn, occ);
    addUser(newUser);
  }
   

  void deleteUser(string u);

  void printUsers();
    
  void saveUsers();
  
  
  int getSize(){return users.getSize();}

 private:
  LinkedList<User> users;
  

  void addUser(User& user);
};

#endif
