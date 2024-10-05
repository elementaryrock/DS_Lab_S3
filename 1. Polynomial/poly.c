#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};
void main()
{
    int i, j, terms, temp;
    struct poly p[10];
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    for (i = 0; i < terms; i++)
    {
        printf("Enter the coefficients and exponents: ");
        scanf("%d%d", &p[i].coeff, &p[i].exp);
    }
    // bubble sort
    for (i = 0; i < terms - 1; i++)
    {
        for (j = 0; j < terms - i - 1; j++)
        {
            if (p[j].exp < p[j + 1].exp)
            { // Sort in descending order of exponent
                temp = p[j].exp;
                p[j].exp = p[j + 1].exp;
                p[j + 1].exp = temp;
            }
        }
    }

    // print the polynomial only once after sorting
    printf("The polynomial is: ");
    for (j = 0; j < terms; j++)
    {
        printf("%dx^%d ", p[j].coeff, p[j].exp);
        if (j < terms - 1)
        {
            printf("+ ");
        }
    }
    printf("\n");
}