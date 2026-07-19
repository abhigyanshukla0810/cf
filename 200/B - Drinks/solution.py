n = int(input())
data = map(int, input().split())
add = 0
i = 0
for num in data:
    add += num
    i+=1
 
c = add/i
print(f"{c:.12f}")