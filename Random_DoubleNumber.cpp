// C++ program to generate random double
// Using random function
#include <iostream>
#include <time.h>
using namespace std;

// Driver Code
int main()
{
    const long max_rand = 1000000L;

    double lower_bound = 0;
    double upper_bound = 100;

    srandom(time(NULL));

      // Using random function to
      // get random double value
    double random_double = lower_bound
                           + (upper_bound - lower_bound)
                                 * (random() % max_rand)
                                 / max_rand;

    cout << random_double << endl;

    return 0;
}