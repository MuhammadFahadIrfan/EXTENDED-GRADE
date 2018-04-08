#include <iostream>
#include "studgrade.h"
#include "extendgrade.h"
using namespace std;
int main()
{
  //studgrade s1(50,60);
  //s1.display();
  extendgrade s1;
  extendgrade s2;
  extendgrade total;
  s1.setsci_grade(40);
  s1.setlang_grade(75);
  s2.setsci_grade(55);
  s2.setlang_grade(65);
  total=s1+s2;
  total.display();
  
  system ("pause");

};