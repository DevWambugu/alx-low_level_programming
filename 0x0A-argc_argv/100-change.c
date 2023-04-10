#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins
*	to make change for an amount of money
*@argc: argument count
*@argv: argument vector
*
*Return: always returns 0
*/
int main(int argc, char *argv[])
{
	int amount = atoi(argv[1]);
	int denominations[] = {25, 10, 5, 2, 1};
	int coins1, coins3 = 0;
	int coins2 = 0;
	int rem_amount = amount;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if ((rem_amount % denominations[i]) == 0)
			{
				coins2 = (rem_amount / denominations[i]);
				break;
			}
			else if ((rem_amount > denominations[i]) != 0)
			{
				coins1 = (rem_amount / denominations[i]);
				coins3 += coins1;
				rem_amount = (rem_amount - (coins1 * denominations[i]));
			}
		}
		printf("%d\n", (coins2 + coins3));
	}
	return (0);
}
