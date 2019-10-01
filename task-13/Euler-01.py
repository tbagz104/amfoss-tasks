
#!/bin/python3

t = int(input())
for a0 in range(t):
    sum=0
    n = int(input())
    for i in range(3,n):
        if(i%3==0 or i%5==0):
            sum=sum+i
    print(sum)
