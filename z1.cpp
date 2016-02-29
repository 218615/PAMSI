#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace  std;

class Tab {
public:
  int N;
  int *Tablica=new int [N];
};

  int main(){
    
     clock_t czas=clock();
     
    Tab tablica;
    tablica.N=10;
    int n=10;
    
    srand(time(NULL));

    
    if(tablica.N>=n){
      
    for(int i=0;i<n;i++)
      {
      tablica.Tablica[i]= rand() % 100;
      
      cout << tablica.Tablica[i] << endl;
      }
    }
    
    else
      tablica.N=tablica.N +1;
    
    cout << "czas trwania programu:"<< czas << endl;
    delete[] tablica.Tablica;
    return 0;
  } 

