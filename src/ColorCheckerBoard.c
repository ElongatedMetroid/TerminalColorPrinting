#include <stdio.h>
#include <unistd.h>

#define CLEAR "\e[1;1H\e[2J"
#define GRE "\x1b[42m"
#define RED "\x1b[41m"
#define YEL "\x1b[43m"
#define BLU "\x1b[44m"
#define MAG "\x1b[45m"
#define RESET "\x1b[0m"

int colorLength = 10;
int pauseLength = 150;  //ms
int n = 0;
int i = 0;     //This i can be changed for some crazy effects   

int main()
{
    while(1)
    {
        for (n = 0; n <= i; n++){
        printf(RED " "RESET);
        }
        for (n = 0; n <= i; n++){
        printf(GRE " "RESET);
        }
        for (n = 0; n <= i; n++){
        printf(YEL " "RESET);
        }
        for (n = 0; n <= i; n++){
        printf(BLU " "RESET);
        }
        for (n = 0; n <= i; n++){
        printf(MAG " "RESET);
        }

        usleep(pauseLength);
    }

    return 0;
}