class IteratoreStruttura():

    def __init__(self, dati, quale):
        self.dati = dati
        self.quale = quale
        self.pari = 0
        self.dispari = 1
        self.x = 2
      
    def __init__(self):
        return self

    def __next__(self):
        if self.quale == 1:
            if self.pari< len(self.dati):
                self.pari += self.x
                return self.dati[self.pari-self.x]
            else:
                raise StopIteration
        else:
            if self.dispari<len(self.dati):
                self.dispari += self.x
                return self.dati[self.dispari-self.x]
            else:
                raise StopIteration

class StrutturaSelettiva():

    def __init__(self, dati, quale):
        self.dati = dati
        self.quale = quale

    def __iter__(self):
        return IteratoreStruttura(self.dati, self.quale)

    
print(list(StrutturaSelettiva([1,2,3,4,5], 1)))
print(list(StrutturaSelettiva([1,2,3,4,5], 0)))
print(list(StrutturaSelettiva([1,2,3,4,5], 4)))
print(list(StrutturaSelettiva([2,3,1,1,5], 1)))
