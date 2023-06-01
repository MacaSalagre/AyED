#include <iostream>//Libreria principal de C++
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double d = 0.0;


    for (int i = 0; i <= 999999; i++){
        d = (pow((-1), i) / ((2*i)+1)) + d;
    }
    
    cout.precision(7);

    cout << "Aproximacion de pi: " << (d*4) << endl;

}