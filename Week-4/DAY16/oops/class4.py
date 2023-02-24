class School:
    name="abc"

class Home:
    name="GHAR"

class Student(Home,School):
    def getName(self):
        print(self.name)

s=Student()
s.getName()