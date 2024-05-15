class Car:
    def __init__(self, brand, model, year, price):
        self.brand = brand
        self.model = model
        self.year = year
        self.__price = price # encaptulation

    def show_details(self):
        print(f'Brand : {self.brand}/nModel : {self.model}/Year : {self.year}')

    def get_price(self):
        return self.__price
    def set_price(self, price):
        self.__price = price


# creating object for Car

toyota = Car('Toyota', 'Corola', 2010, 1000000)
toyota.show_details()
print(toyota.get_price())