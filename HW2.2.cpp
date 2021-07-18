#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
  string m_name;
  string m_color;
  
  void setname(string name){m_name = name;}
  string getname () {return m_name;}
  
  void setcolor(string color){m_color = color;}
  string getcolor () {return m_color;}
  
  class apple : public virtual Fruit {
      Apple apple;
      apple.setapple("red");
  };
  class banana : public virtual Fruit {
      Banana banana;
      banana.setbanana("yellow");
  };
  class GS : public virtual apple {
      GranySmith GS;
      GS.setGS("green");
  };
};

int main() {
    cout << apple.getname << apple.getcolor << "\n";
    cout << banana.getname << banana.getcolor << "\n";
    cout << GS.getname << GS.getcolor << "\n";
    return 0;
}