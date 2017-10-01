#include <iostream>
using namespace std ;

//function
int buy (int x , int y ){

  int z ;

  cout << x << "円のりんごを" << y << "個買いました。" << '\n' ;

  z = x*y ;

  return z ;
}


//call function
int main (){

  int num1 , num2 , squear ;

  cout << "いくらのりんごを買いますか。" << '\n' ;
  cin  >> num1 ;

  cout << "何個買いますか。" << '\n' ;
  cin  >> num2 ;

  squear = buy( num1 , num2 ) ;
  cout << "合計で" << squear << "円になります。" << '\n';

  return 0 ;
}
