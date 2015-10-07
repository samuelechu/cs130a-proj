#ifndef __WALL_H__
#define __WALL_H__

#include <string>
#include <iostream>
#include "WallPost.h"
using namespace std;

class Wall{
 public:
 Wall(string u): username(u){
    wallPosts = NULL;

  }

  ~Wall(){


  }

  void insert(string c, string t, string u);
  void remove(int index);
  
  string getUsername(){return username;}
  void setUsername(string &u){username = u;}
  
 private:

  LinkedList<WallPost> wallPosts;
  string username;

}
