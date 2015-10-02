#include "LinkedList.h"

#include <iostream>
#include "tddFuncs.h"

using namespace std;

int main(){

   cout << "Running tests from: " << __FILE__ << endl;

   LinkedList<int> l;
   

   l.insert(4);
   l.insert(5);

   ASSERT_EQUALS(2,l.getSize());

}
