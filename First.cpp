#include <iostream>

int main(){
  bool isLoggedIn = true;
  int username;
  int password;
  std::string user = "123";
  std::string pass = "123!";
  
  while isLoggedIn == false {
    std::cout << "log in\n";
    std::cin >> username;
    if (username == user) {
      std::cout << "Enter your password:"; std::cin >> password;
      if (password == pass) {
        std::cout << "Logged in successfully!";
        isLoggedIn = false;
      }
    }
}
