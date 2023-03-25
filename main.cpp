// Cby2
// the second exploration of an array and array processing
// this is a simplistic view of an array by array, and not actually practical in any real world situation
// these simplistic view only get worse as we go deeper
#include <iostream>
using namespace std;
int x;          // typical index or subscript variable - another common choice would be 'i'
int y;
int xevent[5][5];  // declare here - initialize later - don't worry you'll likely initialize often, and perhaps in different ways
// you might be tempted to write like this - but try that with 1000 by 1000
// so if you're going to use a loop - may as well - always use a loop - best practice -and practice makes perfect - and makes you faster
//very sloppy int xevent[5][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
int main()
{
    cout << "greetings from Cby2" << endl;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            xevent[x][y] = 0;        // one assignment statement for each index - unavoidable
        }
    }

//  so...in Cby1 we had 5 assignments, here we have 25 - it will get much worse

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            std::cout << " index " << x << " value " << xevent[x][y] << endl;
        }
    }

    std::cin >> x;  // hold the console open, so you can see your result,  until you enter a digit

    return 0;

}
// as for the result - it's ugly to say the least, unwieldly for certain
