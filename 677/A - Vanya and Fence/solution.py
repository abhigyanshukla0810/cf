a,b = map(int,input().split())
data = map(int, input().split())
add = 0
for num in data:
    if num >b:
        add += 2
    else:
        add += 1
print(add)