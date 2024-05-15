from abc import ABC, abstractmethod
class Car(ABC):
    @abstractmethod
    def fun(self):
       pass


class Toyota(Car):
    def fun(self):
        print("toyta can run")

car1 = Toyota()
car1.fun()