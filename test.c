#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int answer = 0;
	printf("==MENU==\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc Bacon\n4. Big Mac\n Votre choix?\n");
	printf(">");
	scanf("%d", &answer);
	switch(answer)
	{
	case 1:
		printf("You choosed royal cheese!");
		break;
	case 2:
		printf("You choosed mc deluxe !");
		break;
	case 3:
		printf("You choosed mc bacon !");
		break;
	case 4:
		printf("You choosed big mac !");
		break;
	default:
		printf("You did not choose a menu");
		break;
	}

	return 0;
}
