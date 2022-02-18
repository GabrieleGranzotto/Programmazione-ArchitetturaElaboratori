from abc import ABC, abstractclassmethod

class Figura(ABC):
    @abstractclassmethod
    def perimetro(self):
        pass

    @abstractclassmethod
    def area(self):
        pass


class Triangolo(Figura):
    def __init__(self, a, b, c, altezza):
        self.a = a
        self.b = b
        self.c = c
        self.altezza = altezza

    def perimetro(self):
        return self.a + self.b + self.c

    def area(self):
        return self.b * self.altezza /2
    

class Circonferenza(Figura):
    pi = 3.141592

    def __init__(self, raggio):
        self.raggio = raggio
    
    def perimetro(self):
        return 2*self.pi * self.raggio

    def area(self):
        return self.pi * self.raggio**2