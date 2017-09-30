#include <iostream>
using namespace std;

//buy function
void buy() {

  std::cout << "車を買いました" << '\n';

}

//call function
int main() {

  buy () ;

  std::cout << "自転車も買いました。" << '\n';

  buy () ;

  return 0;
}
