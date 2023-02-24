class Vehicle:
    no_wheels=0
    makeYear=0
    color=""
    fuelType=""
    name=""

    def test(self):
        print("test...")

class Car(Vehicle):
    def getCarData(self):
        self.name=input("Enter name: ")
        self.no_wheels=int(input("Enter number of wheels: "))
        self.makeYear=int(input("Enter make year: "))
        self.fuelType=input("Enter type of fuel: ")
        self.color=input("Enter color: ")

    def printCarData(self):
        print("Name: ",self.name)
        print("Number of wheels: ",self.no_wheels)
        print("Make Year: ",self.makeYear)
        print("Fuel Type: ",self.fuelType)
        print("Color: ",self.color)

class carType(Car):
    type=""

c1=Car()
c1.getCarData()
c1.printCarData()
ctype=carType()