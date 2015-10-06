#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <iostream>


template < typename T >
class LinkedList {
 public:
  
  // Default constructor
  LinkedList() { head = tail = NULL; }
  

struct Node {

    T value;
    Node *next;
    Node *prev;
    Node(T t, Node* n, Node * p) : value(t), next(n), prev(p) {}

    };
    

  //stream output operator
  friend std::ostream& operator<< (std::ostream& strm, const LinkedList<T>& list) {
    list.printList(list.head,strm);
    return strm;
  }

  
  ~LinkedList() { deleteList(head); }
  
  void insert(const T &value){ 
    if(!head) {
      head = new Node(value, NULL, NULL);
      tail = head;
    }
    else
      insert(tail, value); 
  }


  //T* find(const T& value) const { return find(root, value); }
  int getSize() const{ return getSize(head); }
  

 private:


  Node* head;
  Node* tail;

  // Given
  void printList(const Node *n, std::ostream &os) const;
  void deleteList(Node *n);
  void insert(Node *n, const T& v);
  int getSize(const Node *n) const;
  
};

#include "LinkedList.cpp"
#endif
