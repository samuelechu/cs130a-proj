#include "UserNetwork.h"
#include <iostream>
#include <sstream>
#include <string>


void handleSelection(char a);
void createNewUser();
void loginUser();
void openUserMenu();
void handleUserSelection(char a);
void handleCreatePost();
void handleDeletePost();
void handlePrintWall();


User currentUser;
UserNetwork theNetwork;
int main(){
  theNetwork.loadUsers();   
  bool loop = true;
  
    cout << "Welcome to VisageLivre!\nSelect an option to begin:\n(1) Create New User\n(2) Login Existing User\n(0)Quit\n";
  
while (loop){

   string selection;
  
    cin >> selection;
    handleSelection(selection[0]);
    
    if(selection[0] == '0'){
      loop = false;
      return 0;
    }
    else if (selection[0] >= '3'){
      cout << "That is not a valid selection." << endl << endl;
    }
  }
  
  return 0;
}

void handleSelection(char a){
  
  if(a == '1'){
    createNewUser();
  }
  if(a == '2'){
   loginUser(); 
  }
}

void createNewUser(){
  
  string firstname;
  string lastname;
  string realName;
  string username;
  string password1;
  string password2;
  bool passMatch = false;
  string occupation;
   

  cout << "Enter your first name." << endl;
  cin >> firstname;

  cout << "Enter your last name." << endl;
  cin >> lastname;
  realName = firstname + ' ' + lastname; 
  
  cout << "Enter desired username." << endl;
  cin >> username;
  
  while(!passMatch){
    cout << "Create a  password." << endl;
    cin >> password1;
    cout << "Verify password." << endl;
    cin >> password2;
    if(password1.compare(password2) == 0)
      passMatch = true;
    else
      cout << "Passwords do not match!" << endl;
  }

  cout << "Enter current occupation." << endl;
  cin >> occupation;

  
  theNetwork.addUser(username, password1, realName, occupation);
  
  cout << "User successfully created!" << endl << endl;
  
    cout << "Welcome to VisageLivre!\nSelect an option to begin:\n(1) Create New User\n(2) Login Existing User\n(0)Quit\n";
}

void loginUser(){
  string username;
  string password;
  bool invalid = true;

  while(invalid)
  cout << "Enter username." << endl;
  cin >> username;
  User theUser = theNetwork.find(username);
  if(theUser == NULL){
    cout << "User does not exist!" << endl;
    invalid = true;
  }
  else{
    bool passCheck = false;
    invalid = false;
    
    while(!passCheck){
      cout << "Enter password for " << username << endl;
      cin >> password;
      if(password.compare(theUser.getPassword()) != 0){
        passCheck = false;
        cout << "Password incorrect!" << endl;
      }
      else{
        passCheck = true;
        currentUser = theUser;
        openUserMenu();
      }
    }
 
  }
}

void openUserMenu(){

  bool loop = true;

    cout << "Welcome to VisageLivre, " << theUser.getRealName() << "!\nSelect an option to begin:\n(1) Create Wall Post\n(2) Delete a Wall Post\n(3) Print Wall(0)Logout\n";

while (loop){

   string selection;

    cin >> selection;
    handleUserSelection(selection[0]);

    if(selection[0] == '0'){
      loop = false;
      return;
    }
    else if (selection[0] >= '3'){
      cout << "That is not a valid selection." << endl << endl;
    }
  }

  return;
}

void handleUserSelection(char selection){
  if(selection == '1')
    handleCreatePost();
  if(selection == '2')
    handleDeletePost();
  if(selection == '3')
    handlePrintWall();
}

void handlePrintWall(){

  theUser.printWall();
}
