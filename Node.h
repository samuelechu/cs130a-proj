
#ifndef __NODE_H__
#define __NODE_H__

template < typename T >
class Node {
  public:
    Node(const T &v): value(v) 
    { 
      next = prev = NULL;
    }

  Node(T t, Node* n, Node * p) : value(t), next(n), prev(p) {}

   

    T value;
    Node *next;
    Node *prev;
  };

#endif
