class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def show_details(self):
        print(f'Brand: {self.brand}\nModel: {self.model}\nYear: {self.year}')

    def fun(self):
       print("Car can run")



class Toyota(Car):
    def __init__(self, model, year, price):
        self.price = price
        super().__init__('Toyota', model, year)

    def fun(self):
        super().fun()
        print("toyta can run")




car1 = Toyota('Corola', 2010, 25000)
car1.show_details()
car1.fun()