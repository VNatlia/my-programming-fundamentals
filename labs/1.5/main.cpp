
/**
 * Done by:
 * Student Name: Volynets Natalia
 * Student Group: 121
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    {
        int   a = 66;
        float b = 12.9;
        int   c = 62;
        int   d = 59;

     
        //  empty (! (A != B) &&  (C < D))
       bool result = (!(a != b) && (c < d));
       cout << "result: " << boolalpha << result << endl;
    }

    {
        int a = 0;

        bool result = !a;
        cout << "result: " << boolalpha << result << endl;
    }

    return 0;


}

    //ЗАВДАННЯ 2

#include <iostream>
#include <cmath>

using namespace std;

const int  a = 4;

int main() {
   
    int b = 593;
    int e = 43;
    short f;
    float d = 9.23;

    int *C = &b;

    // Обчислення виразу 
    int result = (a ^ *C) / (b * d) < (e * (b >> sizeof(f)));

   
    printf("Result: %d\n", result);

    return 0;
}
