#include <iostream>
using namespace std;

template < typename T >
void LinkedList<T>::printList(const LinkedList<T>::Node *n, std::ostream &os) const {
  if(!n)
    return;
  else {
    os << n->value << endl;
    
    if(n->next)
      printList(n->next, os);
 

  }
}

template < typename T >
void LinkedList<T>::deleteList(LinkedList<T>::Node *n){

  if(n == NULL)
    return;

  deleteList(n -> next);

  delete n;
  return;
}


template < typename T >
int LinkedList<T>::getSize(const LinkedList<T>::Node *n) const {
  
  if(!n)
    return 0;

  int result = getSize(n->next);

  return result + 1;
}


template < typename T >
void LinkedList<T>::insert(LinkedList<T>::Node *n, const T &c) {

  
  LinkedList<T>::Node *newNode = new Node(c);

  newNode -> prev = n;
  n -> next = newNode;
 
  return;
}
