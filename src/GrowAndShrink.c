#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

#define CLEAR "\e[1;1H\e[2J"
#define GRE "\x1b[42m"
#define RED "\x1b[41m"
#define YEL "\x1b[43m"
#define BLU "\x1b[44m"
#define MAG "\x1b[45m"
#define RESET "\x1b[0m"

int colorLength = 0;
int pauseLength = 1000;
const int interval = 100;
int intervalCounter = 0;
char *space[255] = {" ", "  ", "   ", "    ", "     ", "      ", "       ", "        ","         ", "          ", "           ", "            "};
int main()
{
        while(1)
        {

                printf(RED "%s"RESET, space[colorLength]);
                printf(GRE "%s"RESET, space[colorLength]);
                printf(YEL "%s"RESET, space[colorLength]);
                printf(BLU "%s"RESET, space[colorLength]);
                printf(MAG "%s"RESET, space[colorLength]);
                if(intervalCounter > interval)
                {
                        colorLength++;
                        intervalCounter -= interval;
                }

                if(colorLength > 10)
		{
			while(colorLength != 0)
			{
	                	printf(RED "%s"RESET, space[colorLength]);
                		printf(GRE "%s"RESET, space[colorLength]);
	                	printf(YEL "%s"RESET, space[colorLength]);
        	        	printf(BLU "%s"RESET, space[colorLength]);
                		printf(MAG "%s"RESET, space[colorLength]);
				usleep(pauseLength);
				colorLength--;
			}
                }

		intervalCounter++;
                usleep(pauseLength);
        }

        return 0;
}

