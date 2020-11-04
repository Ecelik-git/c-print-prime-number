#include <iostream>
int main() {
  int n;
  std::cout<<"Enter a number: ";
  std::cin>>n;
  if (n%2==0 || n%3 ==0 || n%5==0 || n%7==0){
        std::cout<<n<<" is not a prime number";
    }else{
        std::cout<<n<<" is a prime number"; 
    }
}
