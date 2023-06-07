#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define PASSWORD_LENGTH 10

/**
 * *generate_password - generates password
 *
 *
 *
 * Return (0)
 **/

char *generate_password()

{
	char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));

	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	
	srand(time(NULL));

	int i;
	for (i = 0; i < PASSWORD_LENGTH; i++)
{
	int index = rand() % (sizeof(charset) - 1);
	password[i] = charset[index];
}
	password[PASSWORD_LENGTH] = '\0';
	
	return (password);
}


int main()

{
	char *password = generate_password();
	printf("Generate password: %s\n", password);
	free(password);

	return(0);
}
