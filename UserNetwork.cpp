#include <iostream>
#include <string>
#include "UserNetwork.h"


using namespace std;


void UserNetwork::addUser(User& user){

  LinkedList<User>::Node *n = users.getHead();

    while(n){

      if(n->value.getUsername().compare(user.getUsername()) == 0) 
	return;

      n = n->next;

    }

    users.insert(user);



}


void UserNetwork::printUsers(){


 LinkedList<User>::Node *n = users.getHead();

    while(n){
      cout<< n->value.getUsername() << "\n";
      n = n->next;
    }


}


void UserNetwork::deleteUser(string u){
  
 LinkedList<User>::Node *n = users.getHead();

    while(n){
      
      if(n->value.getUsername().compare(u) == 0){
	users.deleteNode(n);
	return;
      }
	
      n = n->next;
    }


}
