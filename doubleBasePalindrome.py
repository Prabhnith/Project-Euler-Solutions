numbers=[]
for x in xrange(1,1000000):
    nx = list(str(x))
    nxx= int("".join(nx[::-1]))
    if x == nxx:
        nbin=bin(x)[2:]
        nbinrev=nbin[::-1]

        if int(nbin) == int(nbinrev):
            numbers.append(x)
print numbers
print sum(numbers)
