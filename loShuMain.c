#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef enum{
	ls_success,
	ls_fail
} Status;

int main(void)
{
	//defined in loShu.c
	int loShuTest(int grid[3][3]);
	
	int loShuSquare[3][3];
	int counter = 0;
	int result;
	srand(time(NULL));

	while(result != ls_success)
	{
		//I know there is absolutely a better way to do it than this but I couldn't think of it.
		loShuSquare[0][0] = (rand() % 9) + 1;
		loShuSquare[0][1] = (rand() % 9) + 1;
		while(loShuSquare[0][1] == loShuSquare[0][0])
		{
			loShuSquare[0][1] = (rand() % 9) + 1;
		}
		loShuSquare[0][2] = (rand() % 9) + 1;
		while(loShuSquare[0][2] == loShuSquare[0][0] || loShuSquare[0][2] == loShuSquare[0][1])
		{
			loShuSquare[0][2] = (rand() % 9) + 1;
		}
		loShuSquare[1][0] = (rand() % 9) + 1;
		while(loShuSquare[1][0] == loShuSquare[0][0] || loShuSquare[1][0] == loShuSquare[0][1] || loShuSquare[1][0] == loShuSquare[0][2])
		{
			loShuSquare[1][0] = (rand() % 9) + 1;
		}
		loShuSquare[1][1] = (rand() % 9) + 1;
		while(loShuSquare[1][1] == loShuSquare[0][0] || loShuSquare[1][1] == loShuSquare[0][1] || loShuSquare[1][1] == loShuSquare[0][2] || loShuSquare[1][1] == loShuSquare[1][0])
		{
			loShuSquare[1][1] = (rand() % 9) + 1;
		}
		loShuSquare[1][2] = (rand() % 9) + 1;
		while(loShuSquare[1][2] == loShuSquare[0][0] || loShuSquare[1][2] == loShuSquare[0][1] || loShuSquare[1][2] == loShuSquare[0][2] || loShuSquare[1][2] == loShuSquare[1][0] || loShuSquare[1][2] == loShuSquare[1][1])
		{
			loShuSquare[1][2] = (rand() % 9) + 1;
		}
		loShuSquare[2][0] = (rand() % 9) + 1;
		while(loShuSquare[2][0] == loShuSquare[0][0] || loShuSquare[2][0] == loShuSquare[0][1] || loShuSquare[2][0] == loShuSquare[0][2] || loShuSquare[2][0] == loShuSquare[1][0] || loShuSquare[2][0] == loShuSquare[1][1] || loShuSquare[2][0] == loShuSquare[1][2])
		{
			loShuSquare[2][0] = (rand() % 9) + 1;
		}
		loShuSquare[2][1] = (rand() % 9) + 1;
		while(loShuSquare[2][1] == loShuSquare[0][0] || loShuSquare[2][1] == loShuSquare[0][1] || loShuSquare[2][1] == loShuSquare[0][2] || loShuSquare[2][1] == loShuSquare[1][0] || loShuSquare[2][1] == loShuSquare[1][1] || loShuSquare[2][1] == loShuSquare[1][2] || loShuSquare[2][1] == loShuSquare[2][0])
		{
			loShuSquare[2][1] = (rand() % 9) + 1;
		}
		loShuSquare[2][2] = (rand() % 9) + 1;
		while(loShuSquare[2][2] == loShuSquare[0][0] || loShuSquare[2][2] == loShuSquare[0][1] || loShuSquare[2][2] == loShuSquare[0][2] || loShuSquare[2][2] == loShuSquare[1][0] || loShuSquare[2][2] == loShuSquare[1][1] || loShuSquare[2][2] == loShuSquare[1][2] || loShuSquare[2][2] == loShuSquare[2][0] || loShuSquare[2][2] == loShuSquare[2][1])
		{
			loShuSquare[2][2] = (rand() % 9) + 1;
		}

		counter++;
		result = loShuTest(loShuSquare);
	}
	

	printf("After %d attempts, found this successful Lo Shu Magic Square:\n", counter);
	for(int i = 0; i < 3; i++)
	{
		printf("[%d %d %d]\n", loShuSquare[i][0], loShuSquare[i][1], loShuSquare[i][2]);
	}
	
}
