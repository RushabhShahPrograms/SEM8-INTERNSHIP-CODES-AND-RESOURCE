class Zomato:
    def order(self):
        print("ordered called...")

    def order(self,price):
        print("ordered called...with price",price)

z=Zomato()
z.order(100)
