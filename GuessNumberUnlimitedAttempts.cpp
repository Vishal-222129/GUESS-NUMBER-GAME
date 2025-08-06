#include <iostream>
#include <cstdlib>
#include <ctime>

//  <cstdlib>   Contain { rand() } function used to generate random Numbers
//  <ctime>     Contains { srand(time(0)) } function used to chnage generated random number by rand() because rand() function may generate multiple same number hence this helps generate different numbers

using namespace std;

/*

    Rules of Games : 
    if Entered Value is in Range of : Entered Value - 10 < CorrectValue < Entered Value + 10 Then -> HOT!
    else -> COLD! 

*/

int main()
{

    srand(time(0));

    int upper = 100;
    int lower = 1;

    //  Generating Random Number between 1 to 100;

    int randomNumber = rand() % (upper - lower + 1) + lower;

    int x;
    cout<<"Enter any Number Between 1 and 100 : ";
    cin>>x;

    while(1)
    {

        if(x == randomNumber)
        {
            cout<<"You Guessed it Right!!\n";
            break;
        }

        else if(x <= randomNumber + 10 && x >= randomNumber - 10)
        {
            cout<<"Hot!\n";
        }

        else
        {
            cout<<"Cold!\n";
        }

        cout<<"Enter Number Again : ";
        cin>>x;

    }

}