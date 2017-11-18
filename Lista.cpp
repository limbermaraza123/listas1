#include <iostream>
#include <ctime>
#include <cstdlib>
#include <list>
using namespace std;
void mostrar(list<char>r)
{
    cout<<endl;cout<<endl;
    cout<<"*Datos de la lista ya Ordenado*"<<endl;
    list<char>::iterator  i=r.begin();
    while(i!=r.end())
    {
        cout<<*i<<"  ";
        i++;
    }
}
void insertar(list<char> &r, char dato)
{
    if(r.size()<=0)
        r.push_front(dato);
    else
    {
        list<char>::iterator i=r.begin();
        while(i!=r.end())
        {
            if((int) dato <= (int)(*i))
            {
                r.insert(i, dato);
                break;
            }
            i++;
        }
        if(i==r.end())
            r.push_back(dato);
    }
}
int main()
{
    cout<<"Ingrese un numero:";int n;
    cin>>n;
    cout<<"Datos de la lista al Azar"<<endl;
    list<char>r;
    srand(time(NULL));
    while(n-->0)
    {
        int dato=rand()%26+65;
        cout<<(char)dato<<" ";
        insertar(r, char(dato));
    }
    r.unique();
    mostrar(r);
    return 0;
}
