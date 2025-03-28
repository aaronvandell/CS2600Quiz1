typedef enum{
	ls_success,
	ls_fail
} Status;

int loShuTest(int grid[3][3])
{
	int successTracker = 0;

	for (int i = 0; i < 3; i++)
	{
		if ((grid[i][0] + grid[i][1] + grid[i][2]) == 15)
		{
			successTracker++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((grid[0][i] + grid[1][i] + grid[2][i]) == 15)
		{
			successTracker++;
		}
	}
	if (grid[0][0] + grid[1][1] + grid[2][2] == 15)
	{
		successTracker++;
	}
	if (grid[2][0] + grid[1][1] + grid[0][2] == 15)
	{
		successTracker++;
	}

	if (successTracker == 8)
	{
		return ls_success;
	}
	else{
		return ls_fail;
	}
}