num=int(input())
for i in range(0,num):
    s=int(input())
    l.append(s)
for i in range(0,num):
    if((i+1)!=l[i]):
        print(i)
        break
