class Parent:
    def __init__(self,name):
        print("Parent Constructor")

class Child(Parent):
    def __init__(self, name):
        super().__init__("rakesh")
        print("Child Constructor")

c=Child()