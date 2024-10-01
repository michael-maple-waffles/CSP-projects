age = int(input("how old are you?:\n"))

if age >= 5:
    print("you can go to school")
    if age >= 16:
        print("Believe it or not... You can drive!")
        if age >= 18:
            print("No way! YOU CAN VOTE???")
    elif age >= 15:
        print("Go get your learners Permit!")
else:
    print("go away child!")

#alternative for Mrs.Larose!

if age >= 18:
    print("\nGuess what! You can Vote!")
elif age >= 16:
    print("\nBelieve it or not! You can drive")
elif age >= 15:
    print("\nA drievrs license for You!")
elif age >= 5:
    print("\nGo back to school... Because You can!")
else:
    print("\nGo away child!")
