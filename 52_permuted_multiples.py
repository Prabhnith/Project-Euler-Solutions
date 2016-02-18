for i in xrange(1,1000000):
    listNum=list(str(i))
    listNum.sort()
    list2xNum=list(str(2*i))
    list2xNum.sort()
    if listNum==list2xNum:
        list3xNum=list(str(3*i))
        list3xNum.sort()
        if listNum==list3xNum:
            list4xNum=list(str(4*i))
            list4xNum.sort()
            if listNum==list4xNum:
                list5xNum=list(str(5*i))
                list5xNum.sort()
                if list5xNum==listNum:
                    list6xNum=list(str(6*i))
                    list6xNum.sort()
                    if listNum==list6xNum:
                        print i
                        break
