#include <stdio.h>

int main()
{
    double loan_amount, inrested_rate, years, month, total_amount;

    printf("Enter The Loan Amount : ");
    scanf("%lf", &loan_amount);
    printf("Ënter The Inrested Rate : ");
    scanf("%lf", &inrested_rate);
    printf("Enter The Number of Years : ");
    scanf("%lf", &years);

    total_amount = loan_amount + loan_amount * inrested_rate * years / 100;
    month = total_amount / (years * 12);

    printf("Tota Amount : %.2lf\n Monthly Amount : %.2lf\n", total_amount, month);

    return 0;
}
