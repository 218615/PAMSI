#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

class Stoper{
public:

  time_point<system_clock> start, end;
  time_point<system_clock> &tmpS=start;
  time_point<system_clock> &tmpE=end;
 void zacznij();
  void koniec();
};

void Stoper:: zacznij(){
  tmpS= system_clock::now();
}

void Stoper::koniec(){
  
 tmpE = system_clock::now();
 
  duration<double> elapsed_seconds = tmpE-tmpS;
  cout << "czas trwania programu:"<< elapsed_seconds.count() << "s\n";
}

int main ()
{
  float c=1243123,b=0.000002;
  Stoper a;
  
  a.zacznij();
  
  cout << c*b << endl;
  
  a.koniec();
  
  return 0;
}
