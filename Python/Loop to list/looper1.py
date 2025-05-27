start=int(input("starting number "))
end=int(input("ending number "))
li=[]
#conditions are the same with the for loop version
#what changed is, there is another way for range() function
#range() automatically increment one when generating numbers
#so, to controll increment the +=1 and -=1 are indicators for that
#if starting form small number, we have to increment which is +=1
#if we are starting from big number, we will decrement which is -=1
if (start<end):
  while (start<end):
    li.append(start)
    start+=1
else:
  while (start>end):
    li.append(end)
    end+=1
  
print(li)    
