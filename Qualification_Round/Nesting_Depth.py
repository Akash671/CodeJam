"""
author            :   Akash kumar
codejam username  :   Akash@1996
"""

T=1
for _ in range(int(input())):
    s=str(input())
    c=0
    print("Case #"+str(T)+": ",end="")
    for i in range(len(s)): 
        if s[i]=='0':
           if c!=0:
             print(")",end="")
           print(s[i],end="")
           c=0
        else:
           if c==0:
             print("(",end="")
             print(s[i],end="")
             c+=1
           else:
              print(s[i],end="")
    if s[len(s)-1]=='1':
        print(")",end="")
    T+=1
    print()
         
               
