class Vacanza:

    def __init__(self, nome, partenza, ritorno, localita, resort, prezzo, partecipanti, responsabile):
        self.nome = nome
        self.partenza = partenza
        self.ritorno = ritorno
        self.localita = localita
        self.resort = resort
        self.prezzo = prezzo
        self.partenza = partecipanti
        self.responsabile = responsabile
    
    def stampa(self):
        print("Viaggio ",self.nome,": partenza da ",self.partenza," e ritorno a ",self.ritorno,".")
        print("Alloggerai nel resort ", self.resort, "ad un prezzo di ",self.prezzo,".")
        print("Verranno con te anche ",self.partecipanti,".")
        print("Il responsabile è: ",self.responsabile)

    def periodo(self):
        return self.ritorno - self.partenza

    def guadagno(self):
        return self.prezzo * 0.47

class VacanzaInvernale(Vacanza):

    def __init__(self, skipass, impianti):
        self.skipass = skipass
        self.impianti = impianti

class VacanzaEstiva(Vacanza):

    def __init__(self,distanza,escursioni):
        self.distanza = distanza
        self.escursioni = escursioni




