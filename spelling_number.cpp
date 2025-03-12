#define STR_MAX_SIZE 50

#include <iostream>
#include <string>

void spell_ones(int numtospell_ones)
{
    using namespace std;

    if(numtospell_ones==1)
    {
        cout<<"One ";
    };
    if(numtospell_ones==2)
    {
        cout<<"Two ";
    };
    if(numtospell_ones==3)
    {
        cout<<"Three ";
    };
    if(numtospell_ones==4)
    {
        cout<<"Four ";
    };
    if(numtospell_ones==5)
    {
        cout<<"Five ";
    };
    if(numtospell_ones==6)
    {
        cout<<"Six ";
    };
    if(numtospell_ones==7)
    {
        cout<<"Seven ";
    };
    if(numtospell_ones==8)
    {
        cout<<"Eight ";
    };
    if(numtospell_ones==9)
    {
        cout<<"Nine ";
    };
    


};

void spell(int numtospell)
{

    using namespace std;

    int num;
    int y;

    num=numtospell;

    y=num/1000;
    if(y>=1)
    {
        spell_ones(y);
        cout<<"Thousand ";

        num=num-(y*1000);
    };

    y=num/100;
    if(y>=1)
    {
        spell_ones(y);
        cout<<"Hundred ";

        num=num-(y*100);

    };

    cout<<endl;





};


int main(int argc, char *argv[])
{
    using namespace std;

    int i;
    int j;

    string str01;

    if( argc > 1 )
    {
        i=1;

        while(i<argc)
        {
            str01=argv[i];
            j=stoi(str01);
            spell(j);
            
            i++;
        };
        


    }else
    {
        cout<<"ERROR: No ARG input."<<endl;
    };


    return 0;

};


