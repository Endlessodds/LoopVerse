#this code asks number to start with and end then, to generate those numbers and store them in a list. and display them
start=int(input("starting number "))
end=int(input("ending number "))
li=[]


if (start<end):
  
  for i in range(start,end):
    li.append(i)
else:
  for i in range(start,end,-1):
    li.append(i)
  
print(li)  
