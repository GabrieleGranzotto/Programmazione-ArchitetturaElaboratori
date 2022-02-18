class Umani():
    def __init__(self, nome, cognome, eta, citta, professione):
        self.nome = nome
        self.cognome = cognome
        self.eta = eta
        self.citta = citta
        self.professione = professione
    
    def presentazione(self):
        print("Salve, Sono {} {}, nato a {}, di età {} e faccio {}", values= (self.nome, self.cognome, self.citta, self.eta, self.professione))

studente = Umani
print("Inserire il tuo nome: ")
studente.nome = input()
print("Inserire il tuo cognome: ")
studente.cognome = input()
print("Inserire la città in cui sei nato: ")
studente.citta = input()
print("Inserire la tua età: ")
studente.eta = input()
print("Inserire la tua professione: ")
studente.professione = input()

studente.presentazione()