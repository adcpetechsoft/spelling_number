/*
    integer to english word Progrma
    As a submission to https://code.golf/spelling-numbers#cpp

    Created by: amd
*/

// ---------------------------------
// Preprocessor Declaration
#include <iostream>
#include <string>

// ********************************
// Global Variables

// variable words for 2 to 20
std::string num_spell_ones[20]
{
    " ",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
};

// variable words for 10 - 90
std::string num_spell_tens[10]
{
    " ",
    "ten",
    "twenty",
    "thirty",
    "fourty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety",
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

    string std01;

    // ***********************
    // Actual Function
    num=numtospell;

    std01[0]='\0';

    // for zero value
    if(num==0)
    {
        std01="zero";
    };

    // for 1000s
    y=num/1000;
    if(y>=1)
    {
        std01+=num_spell_ones[y];
        std01+=" thousand ";
        num=num-(y*1000);
    };

    // for 100s
    y=num/100;
    if(y>=1)
    {
        std01+=num_spell_ones[y];
        std01+=" hundred ";
        num=num-(y*100);
    };

    // for 1 to 100
    if(num>0 && numtospell>100)
    {
        std01+="and ";
    };

    // for tens 10 to 99
    if(num>=20)
    {
        // for 20 to 99
        y=num/10;
        std01+=num_spell_tens[y];
        num=num-(y*10);

        y=num;
        if(y>0)
        {
            std01+="-";
            std01+=num_spell_ones[y];
        };

    }else
    {
        // for 10 to 19
        y=num;
        if(y>=10 && y<=19)
        {
            std01+=num_spell_ones[y];
        }else
        {
            std01+=num_spell_ones[y];
        };

        num=num-y;
    };
    cout<<std01;
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

