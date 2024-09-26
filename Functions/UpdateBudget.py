#Insert a function that asks for information
def ask(type):
    return float(input("How much is " +type+ "?: \n"))

#Insert a function that does pecents
def per(var):
    return float(var / income * 100)

#Gathering information
print("this is going to calculate your income!\n")
income = ask("income")
rent = ask("rent")
utilities = ask("utilities")
groceries = ask("groceries")
transportation = ask("transportation")
#using the info
expenses = rent + utilities + groceries + transportation
savings = income * .2
afterExpenses = income - expenses - savings
prent = per(rent)
putilities = per(utilities)
pgroceries = per(groceries)
ptransportation = per(transportation)

#Printing information
print("you spend " ,expenses)
print("you make " ,afterExpenses)
print("rent is " ,prent, "% of your total budget")
print("utilitites is " ,putilities, "% of your total budget")
print("groceries are " ,pgroceries, "% of your total budget")
print("transportation is " ,ptransportation, "% of your total budget")

