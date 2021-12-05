#include <stdio.h>
#include <limits.h>
#include <unistd.h>

#define GRE "\x1b[32m"
#define RED "\x1b[31m"
#define YEL "\x1b[33m"
#define BLU "\x1b[34m"
#define MAG "\x1b[35m"
#define RESET "\x1b[0m"
int main()
{
    int pauseLength = 0;
    register unsigned long long int i = 0;
    register unsigned long long int max = ULLONG_MAX;
    while(1)
    {
        for(i = 0; i < max; i++)
        {
            printf(RED "%lld "RESET, i);
            ++i;
            printf(YEL "%lld "RESET, i);
            ++i;
            printf(GRE "%lld "RESET, i);
            ++i;
            printf(BLU "%lld "RESET, i);
            ++i;
            printf(MAG "%lld "RESET, i);
            usleep(pauseLength);
        }
    }

    return 0;
}