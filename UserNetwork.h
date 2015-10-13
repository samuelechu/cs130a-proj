#ifndef __USER_NETWORK_H__
#define __USER_NETWORK_H__




#include <string>
#include <iostream>
using namespace std;

class UserNetwork{

 public:
  UserNetwork(){
    users = NULL;
  }

  void addUser(string u, string p, string rn, string occ){
    User n = User(string u, string p, string rn, string occ);

    users.insert(user);



  }

 private:
  LinkedList<User> users;
  
}

#endif
