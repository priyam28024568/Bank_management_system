#include "useraccs.h"

newuseraccs::newuseraccs(){
}

newuseraccs::newuseraccs(std::string& username, std::string& password)
{
  std::string confirm;
  std::string confirm2;
 
  std::cout << "confirm your username " << username << std::endl;
  std::cin >> confirm;
  if(confirm == "yes"){
    v.push_back(username);
    std::cout << "confirm your password " << password << std::endl;
      std::cin >> confirm2;
       if(confirm2 == "yes"){
        N.push_back(password);
        std::cout << "new account is created" << std::endl;
       }
  }else{
      return;
  }

}

newuseraccs::~newuseraccs(){    
}
