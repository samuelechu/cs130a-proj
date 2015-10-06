#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <iostream>


template < typename T >
//The Binary Search tree for Cards
class LinkedList {
 public:
  
  // Default constructor
  LinkedList() { head = tail = NULL; }
  

class Node {
  public:
    Node(const T &v): value(v) 
    { 
      next = prev = NULL;
    }

    T value;
    Node *next;
    Node *prev;
    };
    

  //stream output operator
  friend std::ostream& operator<< (std::ostream& strm, const LinkedList<T>& list) {
    list.printList(list.head,strm);
    return strm;
  }

  
  ~LinkedList() { deleteList(head); }
  
  void insert(const T &value){ 
    if(!head) {
      head = new Node(value);
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


#endif
