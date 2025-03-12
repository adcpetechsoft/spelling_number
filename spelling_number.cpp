#include <iostream>
#include <string>

void spell_ones(int numtospell_ones)
{
    using namespace std;

    if(numtospell_ones==1)
    {
        cout<<"one ";
    };
    if(numtospell_ones==2)
    {
        cout<<"two ";
    };
    if(numtospell_ones==3)
    {
        cout<<"three ";
    };
    if(numtospell_ones==4)
    {
        cout<<"four ";
    };
    if(numtospell_ones==5)
    {
        cout<<"five ";
    };
    if(numtospell_ones==6)
    {
        cout<<"six ";
    };
    if(numtospell_ones==7)
    {
        cout<<"seven ";
    };
    if(numtospell_ones==8)
    {
        cout<<"eight ";
    };
    if(numtospell_ones==9)
    {
        cout<<"nine ";
    };
    
};

void spell_tens(int numtospell_tens)
{
    using namespace std;

    if(numtospell_tens==2)
    {
        cout<<"twenty";
    };
    if(numtospell_tens==3)
    {
        cout<<"thirty";
    };
    if(numtospell_tens==4)
    {
        cout<<"forty";
    };
    if(numtospell_tens==5)
    {
        cout<<"fifty";
    };
    if(numtospell_tens==6)
    {
        cout<<"sixty";
    };
    if(numtospell_tens==7)
    {
        cout<<"seventy";
    };
    if(numtospell_tens==8)
    {
        cout<<"eighty";
    };
    if(numtospell_tens==9)
    {
        cout<<"ninety";
    };
    
};

void spell_teen(int numtospell_tens)
{
    using namespace std;


    if(numtospell_tens==11)
    {
        cout<<"eleven ";
    };
    if(numtospell_tens==12)
    {
        cout<<"twelve ";
    };
    if(numtospell_tens==13)
    {
        cout<<"thirteen ";
    };
    if(numtospell_tens==14)
    {
        cout<<"fourteen ";
    };
    if(numtospell_tens==15)
    {
        cout<<"fifteen ";
    };
    if(numtospell_tens==16)
    {
        cout<<"sixteen ";
    };
    if(numtospell_tens==17)
    {
        cout<<"seventeen ";
    };
    if(numtospell_tens==18)
    {
        cout<<"eigtheen ";
    };
    if(numtospell_tens==19)
    {
        cout<<"nineteen ";
    };
    if(numtospell_tens==10)
    {
        cout<<"ten ";
    };

};


void spell(int numtospell)
{

    using namespace std;

    int num;
    int t;
    int h;
    int e;
    int y;

    num=numtospell;

    if(num==0)
    {
        cout<<"zero";
    };

    y=num/1000;
    if(y>=1)
    {
        spell_ones(y);
        cout<<"thousand ";

        num=num-(y*1000);
    };

    y=num/100;
    if(y>=1)
    {
        spell_ones(y);
        cout<<"hundred ";

        num=num-(y*100);

    };

    if(num>0 && numtospell>100)
    {
        cout<<"and ";
    };

    if(num>=20)
    {
        y=num/10;
        spell_tens(y);
        num=num-(y*10);

        y=num;
        if(y>0)
        {
            cout<<"-";
            spell_ones(y);
        };

    }else
    {
        y=num;
        if(y>=10 && y<=19)
        {
            spell_teen(y);
        }else
        {
            spell_ones(y);
        };

        num=num-y;

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

