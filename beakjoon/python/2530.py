a,b,c=map(int,input().split())
plus=int(input())
c+=plus

b=b+c//60
c=c%60

a=a+b//60
b=b%60
a=a%24

print(a,b,c)