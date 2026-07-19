num = int(input())
total = input()
a = total.count("A")
d = total.count("D")
if a>d:
    print("Anton")
elif a<d:
    print("Danik")
else:
    print("Friendship")