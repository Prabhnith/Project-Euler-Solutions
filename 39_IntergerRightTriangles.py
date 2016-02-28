for x in xrange(1001):
    group=set()
    for a in xrange(1,x/2):
        for b in xrange(1,x/2):
            c=x-(a+b)
            if(c*c == a*a + b*b):
                l=[a,b,c]
                l.sort()
                l=tuple(l)
                group.add(l)
    if len(group)>2:
        print x,len(group)
