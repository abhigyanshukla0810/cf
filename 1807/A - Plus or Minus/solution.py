n = int(input())
while n > 0:
    a,b,c = map(int,input().split())
    if a + b == c:
        print("+")
    else:
        print("-")
    n -=1