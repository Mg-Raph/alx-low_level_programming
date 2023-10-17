#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];  // +1 for null terminator
    const char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i;

    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // Generate the random password
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(characters) - 1);  // Generate a random index
        password[i] = characters[index];
    }

    password[PASSWORD_LENGTH] = '\0';  // Add null terminator to the end

    // Print the generated password
    printf("%s\n", password);

    return 0;
}
