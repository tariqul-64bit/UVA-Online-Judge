#include<bits/stdc++.h>
using namespace std;


bool checkSlump (string p)
{
    int len = p.length ();

    if ( len < 3 || (p [0] != 'D' && p [0] != 'E') || p [1] != 'F' ) return false;

    int index = 2;

    while ( p [index] == 'F' ) index++;

    if ( index + 1 == len && p [index] == 'G' ) return true;
    else return checkSlump (p.substr (index, len - index));
}

bool checkSlimp (string p)
{
    int len = p.length();

    if ( len < 2 || p [0] != 'A' ) return false;

    if ( len == 2 && p [1] == 'H' ) return true;

    if ( p [len - 1] != 'C' ) return false;

    if ( p [1] == 'B' ) return checkSlimp (p.substr (2, len - 3));

    else return checkSlump (p.substr (1, len - 2));
}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);

    cout << "SLURPYS OUTPUT" << endl;

    while ( testCase-- ) {
        string input;
        cin >> input;

        bool finalResult = false;

        for ( int i = input.length () - 1; i >= 0; i-- ) {
            if ( input [i] == 'C' || input [i] == 'H' ) {
                finalResult = checkSlimp (input.substr (0, i + 1)) &&
                checkSlump (input.substr (i + 1, input.length () - i - 1));
                break;
            }
        }

        cout << (finalResult ? "YES" : "NO") << endl;
    }

    cout << "END OF OUTPUT" << endl;

    return 0;
}
