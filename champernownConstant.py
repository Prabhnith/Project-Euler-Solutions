import operator
import functools
x='0'
for y in xrange(1,1000001):
    x=x+str(y)
    if y==10000:
        if len(x)==1000000:
            break;
pro=[]
c=1
for i in range(1,8):
    pro.append(int(x[c]))
    c=c*10

print pro
print functools.reduce(operator.mul,pro,1)
