#include <iostream>
using namespace std;
int fib(int n)
{
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
 int firstnum1= fib(n-1);
 int secondnum2= fib(n-2);
 return firstnum1+secondnum2;

}
int main() {
  std::cout<<fib(3)<<endl;
}