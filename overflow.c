#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 8

int auth_password(const char *s);

int main(int argc, char **argv)
{
	char password_buffer[MAX_PASSWORD_LENGTH];
	int a = 0;
	char arr_one[8];
	char arr_two[8];
	char *p = (char *)malloc(100 * sizeof(char));

	if (argc != 2) {
		printf("%s\n", "*************************");
		printf("Usage: %s <password>\n", argv[0]);
		printf("%s\n", "*************************");
		exit(0);
	}

	if (auth_password(argv[1])) {
		printf("%s\n", "ACCESS GRANTED");
	} else {
		printf("%s\n", "ACCESS DENIED");
	}

	return 0;
}

int auth_password(const char *s)
{
	int valid_password = 0;
	char password_buffer[MAX_PASSWORD_LENGTH];

	strcpy(password_buffer, s);

	if (strcmp(password_buffer, "abcde") == 0) {
		valid_password = 1;
	}

	return valid_password;
}
