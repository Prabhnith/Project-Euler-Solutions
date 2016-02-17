maxm=0
for a in xrange(2,100):
    for b in xrange(1,100):
        num=a**b
        digitSum=sum(map(int,list(str(num))))
        if digitSum>maxm:
            maxm=digitSum

print maxm
