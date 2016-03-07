#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace  std;

class Tab {
public:
  int N;
  int *Tablica=new int [N];
};

  int main(){
    
    std::chrono::time_point<std::chrono::system_clock> start, end;
    //clock_t czas=clock();
  start = std::chrono::system_clock::now();
     
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
      tablica.N=tablica.N+1;
  
   }
     end = std::chrono::system_clock::now();
      std::chrono::duration<double> elapsed_seconds = end-start;
      
     cout <<"----" << tablica.N << endl;
    cout << "czas trwania programu:"<< elapsed_seconds.count() << "s\n";
    delete[] tablica.Tablica;
    return 0;
  }
