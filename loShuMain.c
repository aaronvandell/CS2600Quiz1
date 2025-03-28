#include <stdlib.h>
#include <stdio.h>

typedef enum{
	ls_success,
	ls_fail
} Status;

int main(void)
{
	//defined in loShu.c
	int loShuTest(int grid[3][3]);
	
	int loShuSquare[3][3] = {{9, 4, 2}, {3, 5, 7}, {8, 1, 6}};

	int result = loShuTest(loShuSquare);

	if(result == ls_success)
	{
		printf("Success! The square is a Lo Shu Magic Square\n");
		for(int i = 0; i < 3; i++)
		{
			printf("[%d %d %d]\n", loShuSquare[i][0], loShuSquare[i][1], loShuSquare[i][2]);
		}
	}
	else
	{
		printf("The square is not a Lo Shu Magic Square");
	}
	
}
