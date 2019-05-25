s=input()
L=[]
s1 = ''
index = 0
for index in s:
  if index not in L:
    L.append(index)
s1=''.join(L)
Length1=len(s)
Length2=len(s1)
if(Length1 - Length2 == 0):
  print("yes")
else:
  print("No")
