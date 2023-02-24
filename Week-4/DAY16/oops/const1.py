class Test:
    name='x'

    def __init__(self,name):
        print("test class constructor called...",name)
        #self.name=name

t1=Test('raj')
t2=Test('parth')
t3=Test('jay')

print(t1.name)
print(t2.name)
print(t3.name)