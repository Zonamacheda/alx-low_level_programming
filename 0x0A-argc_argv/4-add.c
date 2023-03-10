#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stlib.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return:Always 0 (success)
 */

int main(int argc, char *argv[])

{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)/*goes thru the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);/* ATOI CONVERTS TO STRING*/

			sum += str_to_int;
		}
		/*condition if one of the number contain symbol that are not digit*/

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);/* print sum*/

	return (0);
}
