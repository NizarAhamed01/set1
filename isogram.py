str=input()
L=[]
str1 = ''
index = 0
for index in str:
  if index not in L:
    L.append(index)
str1=''.join(L)
Length1=len(str)
Length2=len(str1)
if(Length1 - Length2 == 0):
  print("yes")
else:
  print("No")
