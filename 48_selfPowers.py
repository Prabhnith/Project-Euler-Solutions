t=0
for i in xrange(1,1000):
    t += i**i

print t%10000000000
