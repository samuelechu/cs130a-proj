#ifndef __USER_H__
#define __USER_H__

#include <string>
#include <iostream>
#include "Wall.h"
using namespace std;

class User{
 public:
 User(Wall w, string u, string p, string rn, string occ): password(p), realName(rn), occupation(occ){
    username = w.getUsername();

  }

  ~User(){


  }

  
  string getUsername(){return username;}
  void setUsername(string &u){username = u;}
  
  string getPassword(){return password;}
  void setPassword(string &p){password = p;}

  string getRealName(){return realName;}
  void setRealName(string &rn){realName = rn;}

  void getOccupation(){return occupation;}
  void setOccupation(string &occ){occupation = occ;}

  void addWallPost(string c, string t){wall.insert(c, t, username);}

 private:

  Wall wall;
  string username;
  string password;
  string realName;
  string occupation;

}
