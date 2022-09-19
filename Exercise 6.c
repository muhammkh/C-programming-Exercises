#include <stdio.h>

int main()
{
	int currentHour = 0;
	int currentMin = 0;
	int durationHour = 0;
	int durationMin = 0;

	do
	{
		printf("Enter current time (hh:mm): ");
		scanf_s("%d:%d", &currentHour, &currentMin);

		if ((currentHour > 23) || (currentHour < 0) || (currentMin > 59) || (currentMin < 0))

			//program must not allow numbers not in the valid range

			printf("Entered numbers have to be in between range of (0 - 23 : 0 - 59).\n");
	} 
	    while ((currentHour > 23) || (currentHour < 0) || (currentMin > 59) || (currentMin < 0));

	do
	{
		printf("How long do you want to sleep (hh:mm): ");

		scanf_s("%d:%d", &durationHour, &durationMin);

		if ((durationHour > 23) || (durationHour < 0) || (durationMin > 59) || (durationMin < 0)) 

			printf("Entered numbers have to be in between range of (0 - 23 : 0 - 59). \n");
	}
	
	       while ((durationHour > 23) || (durationHour < 0) || (durationMin > 59) || (durationMin < 0));

	if ((currentMin + durationMin) < 60) 
		printf("If you go to bed now you must wake up at %d:%d", (currentHour + durationHour) % 24, currentMin + durationMin);

	else
		printf("If you go to bed now you must wake up at %d:%d", (currentHour + durationHour + 1) % 24, (currentMin + durationMin) % 60);

	return 0;
}