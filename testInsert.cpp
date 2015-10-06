#include "LinkedList.h"

#include <iostream>
#include "tddFuncs.h"

using namespace std;

int main(){

   cout << "Running tests from: " << __FILE__ << endl;

   LinkedList<int> l;
   

   l.insert(4);
   l.insert(5);
   
   cout << "Current List : \n" << l;


   l.deleteValue(4);
   
   cout << "New List after deleting value 4: \n" << l;


   ASSERT_EQUALS(1,l.getSize());

}
