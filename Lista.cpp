#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class item {
public:
    string wyraz;
    item *next;
};

class lista{
public:

 void ADD();
  void REMOVE(int indeks);
  void EMPTY();
  void GET(int indeks);
  void SIZE();
};

class Lista :public lista{
public:

item *poczatek;
void ADD(string wyraz);
  void REMOVE(int indeks);
  void EMPTY();
  void GET(int indeks);
  void SIZE();
};

void Lista:: ADD(string wyraz){

    item *nowy = new item;    
    nowy->wyraz = wyraz;

if (poczatek==0){ 
        poczatek = nowy;
    }
    else {
        item *tmp = poczatek;

        while (tmp->next)
        {
            tmp = tmp->next;
        }

        tmp->next = nowy;  
        nowy->next = 0;     
    }
}

void Lista::REMOVE (int indeks)
{
    if (indeks==1)
    {
        item *tmp = poczatek;
        poczatek = tmp->next; 
    }

    if (indeks>=2)
    {
        int j = 1;
        item *tmp = poczatek;

        while (tmp)
        {
            if ((j+1)==indeks) break;

            tmp = tmp->next;
            j++;
        }

        if (tmp->next->next==0)
            tmp->next = 0;

        else
            tmp->next = tmp->next->next;
    }
}


int main(){

Lista *LISTA=new Lista;


return 0;
}
