c=0
for a in xrange(1,100):
    for b in xrange(1,100):
        d=a**b
        if len(str(d))==b:
            c +=1
#            print d, a, b

print c
