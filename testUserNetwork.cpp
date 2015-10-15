#include "LinkedList.h"

#include <iostream>
#include "tddFuncs.h"
#include "UserNetwork.h"

using namespace std;

int main(){

   cout << "Running tests from: " << __FILE__ << endl;

   UserNetwork u;
   

   u.addUser("Sam", "Sammy", "Samuel Chu", "software developer");
   u.addUser("Sam", "Sammy", "Samuel Chu", "software developer");
   u.addUser("Andrew", "Myers", "Andrew Myers", "software developer");

   u.printUsers();


   


   ASSERT_EQUALS(2,u.getSize());

}
