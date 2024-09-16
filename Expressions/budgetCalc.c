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
    prent = rent / income * 10;
    putilities = utilities / income * 10;
    pgroceries = groceries / income * 10;
    ptransportation = transportation / income * 10;
    pexpenses = total_expenses / income * 10;
    printf("your income is:$%.2f\n", income);
    printf("your expenses are:$%.2f\n", total_expenses);
    printf("your savings are:$%.2f\n", savings);
    printf("your total leaft to spend is:$%.2f\n", total);
    printf("your rent is %.2f",prent, "of your income");
    printf("your utilities is %.2f",putilities, "of your income");
    printf("your groceries are %.2f",pgroceries, "of your income");
    printf("your transportation is %.2f",ptransportation, "of your income");
    printf("your expenses are %.2f",pexpenses, "of your income");
    return 0;
}