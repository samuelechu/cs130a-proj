#ifndef __USER_NETWORK_H__
#define __USER_NETWORK_H__

#include <string>
#include <iostream>
#include <fstream>
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
  void printData();
  void printUsers();
  void loadUsers();
  void saveUsers();
  void addPost(string u, string post, string time);
  LinkedList<User>::Node *find(string username); 

  
  int getSize(){return users.getSize();}

 private:
  LinkedList<User> users;
  

  void addUser(User& user);
};

#endif
