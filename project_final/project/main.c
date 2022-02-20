#include "function.h"

int main(void)
{
	int option = 0, type1 = 0, events_type = 0;
	printf("\t\t\t\t\tWelcome To WSU!!!\n\n"); // Title
	do
	{
		printf(" Please choose one of the options below\n\n"); // Begin game option menu.
		printf(" 1.Indoor Activity\n");
		printf(" 2.Outdoor Activity\n");
		printf(" 3.Destination\n");
		printf(" 4.Health/Emergency\n");
		printf(" 5.Exit \n");
		scanf("%d", &option); //User selects the optional menu
		if (option == 1)
		{
			activity_go();
		}
		else if (option == 2)
		{
			outdoor_activity();
		}
		else if (option == 3)
		{
			Destination();
		}
		else if (option == 4)
		{
			healthcare();
		}
		else if (option == 5)
		{
			printf("Thanks."); //Exit message if user chooses to exit the game
			exit(0);

		}

	} while ((option >= 1) && (option < 5));
}