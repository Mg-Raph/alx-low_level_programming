#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Initialize sign as positive
    int i = 0;

    // Check for the sign
    if (s[0] == '-')
    {
        sign = -1; // Negative sign
        i++;
    }

    // Iterate through the string and convert to integer
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            // If a non-numeric character is encountered, break
            break;
        }
        i++;
    }

    return sign * result;
}
