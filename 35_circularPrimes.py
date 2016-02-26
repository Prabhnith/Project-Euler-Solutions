import math
from itertools import islice,count
e=[]
def rotation(num):
    r=[]
    for i in xrange(len(str(num))):
        num=int(str(num)[1:]+str(num)[0])
        r.append(num)
    return r

def isPrime(a):
    return a>1 and all(a % i for i in islice(count(2), int(math.sqrt(a)-1)))

for n in xrange(2,1000000):
    if isPrime(n):
        if '0' in list(str(n)):
            pass
        else:
            r=[]
            r=rotation(n)

            if all(isPrime(i) for i in r):
                e.append(n)

print len(e)
