import random

class Platipo():

    def __init__(self, nome, uova_stagione):
        self.nome = nome
        self.uova_stagione = uova_stagione

    def Uova_totali(self):
        somma = sum(self.uova_stagionale)
        return somma

    def Stagioni_feconde(self):
        lunghezza = len(self.uova_stagione)
        return lunghezza

    def Deponi_uova(self):
        ultimo = input()
        self.uova_stagione.append(ultimo)

    def Genera_stagione(self):
        ultimo = random.randint(0,3)
        self.uova_stagione.append(ultimo)

    def Genera_dieci_stagioni(self):
        for i in range(10):
            self.Genera_stagione()

ornitorinchi = []
print("Questo è un programma che prende un numero di Ornitorinchi, gli da un nome e genere delle uova per 10 anni. \n")
print("Quanti Ornitorinchi prendiamo in considerazione? ")
numero = input()
print("\nInserire i nomi dell'Ornitorinco: ")
for i in range(int(numero)):
    nome = input()
    ornitorinchi.append(Platipo(nome , []))

for obj in ornitorinchi:
    obj.Genera_dieci_stagioni()

for obj in ornitorinchi:
    print(obj.nome, obj.uova_stagione)


