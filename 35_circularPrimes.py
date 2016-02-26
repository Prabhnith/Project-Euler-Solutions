import math
e=[]
def rotation(num):
    r=[]
    for i in xrange(len(str(num))):
        num=int(str(num)[1:]+str(num)[0])
        r.append(num)
    return r

def isPrime(a):
    return all(a % i for i in xrange(2, a))

for n in xrange(2,1000000):
    if isPrime(n):
        r=[]
        r=rotation(n)
        if all(isPrime(i) for i in r):
            e.append(n)
#print e
print len(e)
