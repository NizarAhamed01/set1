n=int(input())
for i in range(0,n):
    s=int(input())
    l.append(s)
for i in range(0,n):
    if((i+1)!=l[i]):
        print(i)
        break
