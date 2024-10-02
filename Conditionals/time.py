import datetime

now = datetime.datetime.now().hour

print(now)

if now <= 12:
    print("good morning, good morning, good morning to YOU! from me to you, from ME!\n Good morning!\n")
elif now <= 18:
    print("Good Afternoon! ;D")
elif now <= 20:
    print("Good evening! :)")
else:
    print("Good night! :b")
