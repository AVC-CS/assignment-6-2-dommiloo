//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
       int random = 2 + (rand() % 9);
       return random;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
     double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;

    double diff1 = abs(mean - rdnum1);
    double diff2 = abs(mean - rdnum2);
    double diff3 = abs(mean - rdnum3);

    if (diff1 <= diff2 && diff1 <= diff3)
        return rdnum1;
    else if (diff2 <= diff1 && diff2 <= diff3)
        return rdnum2;
    else
        return rdnum3;
}