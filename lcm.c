num1=int(input())
num2=int(input())
if(a > b):
    min1 = num1
else:
    min1 = num2
while(1):
    if(min1 % a == 0 and min1 % b == 0):
        print("LCM is:", min1)
        break
    min1 = min1 + 1
