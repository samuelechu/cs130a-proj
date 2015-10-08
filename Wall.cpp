#include <string>
#include <iostream>


using namespace std;

void Wall::insert(string c, string t, string u){
  WallPost w = WallPost(c, t, u);

  wallPosts.insert(w);


}


void Wall::remove(int index){


  wallPosts.deleteAtNdx(index);
  

}

void Wall::printWall(){

  LinkedList<WallPost> n = WallPosts.head;
  
  while(n){
    n->value.printPost();
    n = n->next;
  }
}
