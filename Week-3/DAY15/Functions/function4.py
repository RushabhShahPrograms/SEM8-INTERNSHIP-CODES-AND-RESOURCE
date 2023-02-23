def getData(*args,no):
    print(args)
    print("no...",no)
    for i in args:
        print(i)
        
def getData(*args):
    print(args)
    #print("no..",no)
    for i in args:
        print(i)

getData(15,25,96)