// init
/**
 * Done by:
 * Student Name: Volynets Natalia
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        int   a = 66;
        float b = 12.9;
        int   c = 62;
        int   d = 59;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (! (A != B) && (< (C < D)))
        bool res = (!(a != b) && (<(c < d)));
        cout << "res: " << boolalpha << res << endl;
    }

    {
        int a = 0;

        bool res = !a;
        cout << "res: " << boolalpha << res << endl;
    }

    return 0;
}