items=set()
for a in xrange(2,101):
    for b in xrange(2,101):
        items.add(a**b)

print len(items)
