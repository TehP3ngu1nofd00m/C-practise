/* Absolute Beginner's Guide to C, 3rd Edition Chapter 4 Example 2 --more_conversion_character_practice.c */

#include <stdio.h>

main()
{
    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces    \b\b\b\b can be fixed with the ");
    printf("\\%c Escape Character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines and Beep ");
    printf("a few beeps. \n\n\n");
    printf("%s %c. ", "You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or ", 0.333333);
    printf("%.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n", 0.333333, 0.333333, 0.333333);
}
