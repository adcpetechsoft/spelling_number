/*
    integer to english word Progrma
    As a submission to https://code.golf/spelling-numbers#cpp

    Created by: amd
*/

// ---------------------------------
// Preprocessor Declaration
#include <iostream>
#include <string>

// ---------------------------------
// Function spell_ones declaration
// use to spell for one's
void spell_ones(int numtospell_ones)
{
    // ***********************
    // Variable Declaration
    using namespace std;

    // ***********************
    // Actual Function

    // spell and display of different digit
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

// ---------------------------------
// Function spell_tens declaration
// use to spell for 20 to 90
void spell_tens(int numtospell_tens)
{
    // ***********************
    // Variable Declaration
    using namespace std;

    // ***********************
    // Actual Function

    // spell & display different group digit
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

// ---------------------------------
// Function spell_teen declaration
// use to spell for 10 to 19

void spell_teen(int numtospell_tens)
{
    // ***********************
    // Variable Declaration
    using namespace std;


    // ***********************
    // Actual Function

    // spell & display different group digit

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
        cout<<"eighteen ";
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

// ---------------------------------
// Function spell declaration
// use to call other spell to perfom 
void spell(int numtospell)
{

    // ***********************
    // Variable Declaration
    using namespace std;

    int num;
    int y;

    // ***********************
    // Actual Function
    num=numtospell;

    // for zero value
    if(num==0)
    {
        cout<<"zero";
    };

    // for 1000s
    y=num/1000;
    if(y>=1)
    {
        spell_ones(y);
        cout<<"thousand ";

        num=num-(y*1000);
    };

    // for 100s
    y=num/100;
    if(y>=1)
    {
        spell_ones(y);
        cout<<"hundred ";

        num=num-(y*100);

    };

    // for 1 to 100
    if(num>0 && numtospell>100)
    {
        cout<<"and ";
    };

    // for tens 10 to 99
    if(num>=20)
    {
        // for 20 to 99
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
        // for 10 to 19
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

// ---------------------------------
// Progran  Entry Point
int main(int argc, char *argv[])
{
    // ***********************
    // Variable Declaration
    using namespace std;

    int i;
    int j;

    string str01;

    // ***********************
    // Actual Procedure

    // Test for arg
    if( argc > 1 )
    {
        // for with arg

        i=1;

        // loop to process args
        while(i<argc)
        {
            // call to convert args
            // into number words
            str01=argv[i];
            j=stoi(str01);
            spell(j);
            
            i++;
        };

    }else
    {
        // Situation for no ARG
        cout<<"ERROR: No ARG input."<<endl;
    };

    return 0;

};

