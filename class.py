# Decleare class
class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def show_details(self):
        print(f'Brand : {self.brand}/nModel : {self.model}/Year : {self.year}')


# creating object for Car

toyota = Car('Toyota', 'Corola', 2010)
toyota.show_details()