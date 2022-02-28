#include<iostream>
#include<map> // for map operations
using namespace std;

struct m
{
	int a;
	int b;
    int c;
    int d;
};
  
int main()
{
    enum s_t
    {
        RGB=0,
        TEMP,
        WATER,
    };

    m aInst;
    aInst.a = 10;
    aInst.b = 20;
    aInst.c = 11;
    aInst.d = 21;

    m bInst;
    bInst.a = 30;
    bInst.b = 40;
    bInst.c = 31;
    bInst.d = 41;
    
    map<int,m> mt;
    mt.insert(pair<int,m>(RGB,aInst));
    mt.insert(pair<int,m>(TEMP,bInst));

    cout << "mt[RGB].a" << mt[RGB].a << endl;
    cout << "mt[RGB].b" << mt[TEMP].b << endl;

    return 0;      
}

