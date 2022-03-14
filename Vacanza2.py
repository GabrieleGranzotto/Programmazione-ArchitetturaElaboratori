class Vacanza():

    def __init__(self, nome, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile):
        self.nome = nome
        self.data_partenza = data_partenza
        self.data_ritorno = data_ritorno
        self.localita = localita
        self.resort = resort
        self.prezzo = prezzo
        self.partecipanti = partecipanti
        self.responsabile = responsabile
    
    def stampa(self):
        print("Nome Vacanza: ", self.nome)
        print("Data Partenza: ", self.data_partenza[0], "-",self.data_partenza[1], "-",self.data_partenza[2]) 
        print("Data Ritorno: ", self.data_ritorno[0], "-",self.data_ritorno[2], "-",self.data_ritorno[3]) 
        print("Nome Località: ", self.localita) 
        print("Nome Resort: ", self.resort)
        print("Prezzo: ", self.prezzo) 
        print("Lista Partecipanti: ")
        for cognomi in self.partecipanti:
            print("    -", cognomi)
        print("Nome Responsabile: ", self.responsabile) 
    
    def periodo(self):
        pass

    def guadagno(self):
        pass

class VacanzaInvernale(Vacanza):
    def __init__(self, nome, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile, skipass, impianti_sciistici):
        super().__init__(nome, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile)
        self.skipass = skipass
        self.impianti_sciistici = impianti_sciistici

    def stampa(self):
        super().stampa()
        print("Costo Skipass: ",self.skipass)
        print("Impianti sciistici convenzionati: ")
        for nomi in self.impianti_sciistici:
            print("    -", nomi)

    def periodo(self):
        pass

    def guadagno(self):
        pass

class VacanzaEstiva(Vacanza):
    def __init__(self, nome, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile, distanza, escursioni_marine):
        super().__init__(nome, data_partenza, data_ritorno, localita, resort, prezzo, partecipanti, responsabile)
        self.distanza = distanza
        self.escursioni_marine = escursioni_marine

    def stampa(self):
        super().stampa()
        print("Distanza Resort: ",self.distanza)
        print("Escursioni Marine: ")
        for nomi in self.escursioni_marine:
            print("    -", nomi)

    def periodo(self):
        pass

    def guadagno(self):
        pass

