a = int(input())
 
while a>0:
    n = int(input())
    data = list(map(int, input().split()))
    if 67 in data:
        print("YES")
    else:
        print("NO")
    a -=1