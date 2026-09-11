#include <iostream>
#include "useraccs.h"
#include <algorithm>
//let's make the login system for this

int main(){
    std::string username;
    std::string password;
    int i = 1;
    newuseraccs username1;
     std::cout << "WELCOME TO BANK OF C++ " << std::endl;
   while (i <= 5) {
        std::cout << "1. create new account" << std::endl;
        std::cout << "2. Login" << std::endl;
     int option;
     std::cout << "choose option : " << std::endl;
     std::cin >> option;
     if(option == 1){
        std::cout << "enter the username : " << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     std::getline(std::cin, username);
     std::cout << "enter the password : " << std::endl;
     std::getline(std::cin, password);

     newuseraccs new_account(username,password);

     }else if(option == 2){
        std::cout << "enter the username : " << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if(!std::getline(std::cin, username)){
           std::cout << "program is interupted .. exiting the program" << std::endl;
           break;
        }
        //login logic 
        int index = -1;
      if(username.empty() || username.find_first_not_of(" /t") == std::string::npos){
         std::cout << "nothing entered. Exiting program..." << std::endl;
         break;
      }else{
         auto it = std::find(username1.v.begin(),username1.v.end(),username);
         if(it != username1.v.end()){
            index = it - username1.v.begin();
          }else{
             std::cout << "username does not exist " << std::endl;
          }
            std::cout << "enter the password : " << std::endl;
          
            std::getline(std::cin, password);
            if(index != -1 && index < username1.N.size() && username1.N[index] == password){
                  std::cout << "login successful" << std::endl; 
            }else{
               std::cout << "password do not match try again." << std::endl;
                  return 1;
               }
         }            
                     

        }
         std::cout << std::endl; 
     }
    
     return 0;
   }


    
