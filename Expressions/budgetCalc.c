#include <stdio.h>
#include <math.h>

int main(void) {
    float income,rent,utilities,groceries,transportation, total_expenses, savings, total;
    float prent,putilities,ptransportation, pgroceries,pexpenses;
    printf("this is going to calculate your budget for the month\n");
    printf("how much do you make a month?:");
    scanf("%f", &income);
    printf("how much is rent?:");
    scanf("%f", &rent);
    printf("how much do you spend on utilities?:");
    scanf("%f", &utilities);
    printf("how much do you spend on groceries?:");
    scanf("%f", &groceries);
    printf("how much do you spend on transportation?:");
    scanf("%f", &transportation);
    total_expenses = rent + utilities +groceries + transportation;
    savings = income *.2;
    total = income - total_expenses - savings;
    prent = rent / income * 100;
    putilities = utilities / income * 100;
    pgroceries = groceries / income * 100;
    ptransportation = transportation / income * 100;
    pexpenses = total_expenses / income * 100;
    printf("your income is:$%.2f\n", income);
    printf("your expenses are:$%.2f\n", total_expenses);
    printf("your savings are:$%.2f\n", savings);
    printf("your total leaft to spend is:$%.2f\n", total);
    printf("your rent is  %.2f", prent);
    printf("%% of your total income\n");
    printf("your utilities is %.2f",putilities );
    printf("%% of your total income\n");
    printf("your groceries are %.2f",pgroceries);
    printf("%% of your total income\n");
    printf("your transportation is %.2f",ptransportation);
    printf("%% of your total income\n");
    printf("your expenses are %.2f",pexpenses);
    printf("%% of your total income");
    return 0;
}