#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <chrono>

using namespace std;

class Stoper{
public:
  std::chrono::time_point<std::chrono::system_clock> start, stop;
  std::chrono::duration<double> elapsed_time;
  
};


class Tab {
public:
  int N;
  int *Tablica=new int [N];
};

  int main(){
      
    Stoper czas;
 czas.start = std::chrono::system_clock::now();
  
    Tab tablica;
    tablica.N=10;
     int n=1000000;
    
     srand(time(NULL));

     while(tablica.N<=n){
     if(tablica.N==n){
      
       for(int i=0;i<n;i++)
      {
      tablica.Tablica[i]= rand() % 100;
      
      //cout <<"("<< i +1 << ")" << tablica.Tablica[i] << endl;
     
      }
    }
    else
      tablica.N=tablica.N*2;
  
   }
     czas.stop = std::chrono::system_clock::now();
     czas.elapsed_time= czas.stop-czas.start;
      
     cout <<"----" << tablica.N << endl;
     cout << "czas trwania programu:"<< czas.elapsed_time.count() << "s\n";
    delete[] tablica.Tablica;
    return 0;
  }
