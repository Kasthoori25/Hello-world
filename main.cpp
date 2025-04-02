#include <iostream>
#include <string>
int main() {
std::cout<<"Enter your name"<<std::endl;
std::string name;
getline(std::cin, name);
std::cout << "Hello, " + name + "!!!" << std::endl;
return 0;
}
