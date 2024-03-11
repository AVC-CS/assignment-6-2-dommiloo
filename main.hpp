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
       int random = 1 + (rand() % 9);
       return random;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    
        double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
        if (((abs(mean - rdnum1)) < (abs(mean - rdnum2))) && ((abs(mean - rdnum1)) < (abs(mean - rdnum3))) )
        {
        return rdnum1;
        }
        else if (((abs(mean - rdnum2)) < (abs(mean - rdnum1))) && ((abs(mean - rdnum2)) < (abs(mean - rdnum3))) ){
         return rdnum2;
        }

        else {
         return rdnum3; 
       
        }

        
}