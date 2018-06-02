#include <iostream>
using namespace std;

void func() {
class iamLocal2{

public:
  int a;
  iamLocal2(){
    a =10;
    cout<<"Created local 2"<<endl;
  }
  void testme();
};

iamLocal2 local2;
}

int main(){

  class iamLocal{

  public:
    int a;
    iamLocal(){
      a =10;
      cout<<"Created local"<<endl;
    }
    void testme();
  };
  iamLocal local;
  func();
}
