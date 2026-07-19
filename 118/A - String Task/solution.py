a = map(str, input().lower())
a = list(a)
set2 = []
set3 = []
for i in a:
    if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'y':
        set2.append(i)
    else:
        set3.append('.' + i)
for i in set3:
    print(i, end="")