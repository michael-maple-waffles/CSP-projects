#include <stdio.h>
#include <math.h>
float income,rent,utilities,groceries,transportation, total_expenses, savings, total;

float input(char type[], float var){
    printf("how much is your %s: \n",type);
    scanf("%f", &var);
    return var;
}

void percent(char type[],int amount){
   int per = amount / income * 100;
   printf("Your %s is %d%% of your income.", type, per);
}

int main(void) {
    float prent,putilities,ptransportation, pgroceries,pexpenses;
    printf("this is going to calculate your budget for the month\n");
    income = input("income",income);
    rent = input("rent",rent);
    utilities = input("utilities",utilities);
    groceries = input("groceries",groceries);
    transportation = input("transportation",transportation);

    total_expenses = rent + utilities +groceries + transportation;
    savings = income *.2;
    total = income - total_expenses - savings;
    percent("rent", rent);
    
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("expenses", total_expenses);

    printf("your income is:$%.2f\n", income);
    printf("your expenses are:$%.2f\n", total_expenses);
    printf("your savings are:$%.2f\n", savings);
    printf("your total leaft to spend is:$%.2f\n", total);
    printf("your rent is  %.2f", rent);
    printf("%% of your total income\n");
    printf("your utilities is %.2f",utilities );
    printf("%% of your total income\n");
    printf("your groceries are %.2f",groceries);
    printf("%% of your total income\n");
    printf("your transportation is %.2f",transportation);
    printf("%% of your total income\n");
    printf("your expenses are %.2f",total_expenses);
    printf("%% of your total income");
    return 0;
}