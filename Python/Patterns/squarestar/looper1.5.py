count =0

while(count<25): 
  print("  *",end="")
  if(count+1)%5==0:
    print()
  count+=1

# This is a special code; Therefore, 1 1/2 code(it's just what i like to call it.) for the task using a while loop 
# as u can see variable count starts from 0 and when it goes into while loop, the loop ends exucuting 25 times.
# our task is to print 5 by 5 arterisk. I assume you have a little gist of the above code as of now
# when count goes to while loop, the code prints * and check if count is divisible by 5. because our out put is 5 by 5.
# the code prints * horizontally if count is not divisible by 5
# if count is divisible by 5, then it is printed to a new line.
# code flows like this---->
# * -> * -> * -> * -> * (here count is divisible by 5, so go to new line)
# the above code execute 5 times, which makes the while loop false
