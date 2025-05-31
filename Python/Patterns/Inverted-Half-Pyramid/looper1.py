n=int(input("Enter the dimension: \n"))

j=1
while(j<=n):
  i=n
  while(i>=j):
    print("*  ",end="")
    i-=1
  print()
  j+=1  
