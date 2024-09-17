print("this is going to calculate your income!\n")
income = int(input("how much do you make:"))
rent = int(input("how much is rent?:"))
utilities = int(input("how much does utilities cost?:"))
groceries = int(input("how much do you spend on groceries?:"))
transportation = int(input("how much is transportation?:"))
expenses = rent + utilities + groceries + transportation
savings = income * .2
afterExpenses = income - expenses - savings
prent = rent / income * 10
putilities = utilities / income * 10
pgroceries = groceries / income * 10
ptransportation = transportation / income * 10

print("you spend " ,expenses)
print("you make " ,afterExpenses)
print("rent is " ,prent, "% of your total budget")
print("utilitites is " ,putilities, "% of your total budget")
print("groceries are " ,pgroceries, "% of your total budget")
print("transportation is " ,ptransportation, "% of your total budget")

