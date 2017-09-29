#include <iostream>
using namespace std;

int main() {

  int num1 = 5;
  int num2 = 10;

  cout << "変数num1の値は"  << num1 << "です。"<<"\n" ;
  cout << "変数num1の値は"  << num2 << "です。"<<"\n" ;

swap ( num1 , num2 ) ;

  cout << "変数num1の値は"  << num1 << "です。"<<"\n" ;
  cout << "変数num1の値は"  << num2 << "です。"<<"\n" ;

  return 0;
}

//swap
void swap ( int& x , int& y ){

    int tmp ;
    tmp = x ;
    x = y ;
    y = tmp ;
}
