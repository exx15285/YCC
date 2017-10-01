#include <iostream>
using namespace std;

//buy functuion
void  buy(int x){

  cout << "私は" << x << "の車を買いました。" <<'\n';

}

//call buy function
int main (){

  buy (20) ;
  buy (30) ;

  return 0;
}
