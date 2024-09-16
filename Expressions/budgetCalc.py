print("this is going to calculate your income!\n")
income = input(int("how much do you make:"))
rent = input(int("how much is rent?:"))
utilities = input(int("how much does utilities cost?:"))
groceries = input(int("how much do you spend on groceries"))
transportation = input(int("how much is transportantion"))
expenses = rent + utilities + groceries + transportation
savings = income * .2
afterExpenses = income - expenses - savings
prent = rent / income * 10
putilities = utilities / income * 10
pgroceries = groceries / income * 10
ptransportation = transportation / income * 10

print("you spend" +expenses)
print("you make" +afterExpenses)


