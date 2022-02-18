class Date():
    def __init__(self, giorno, mese, anno):
        self.giorno = giorno
        self.mese = mese
        self.anno = anno

    def __str__(self):
        print(self.giorno,"-",self.mese,"-",self.anno)
    
    def __iter__(self, movimento):
        return self
        
        

    def __next__(self):
        if self.mese == 1 or self.mese == 3 or self.mese == 5 or self.mese == 7 or self.mese == 8 or self.mese == 10 or self.mese == 12:
            self.giorni_max = 31
        if self.mese == 2:
            if (self.anno % 4 == 0 and self.anno % 100 != 0) or (self.anno % 400 == 0):
                self.giorni_max = 29
            else:
                self.giorni_max = 28
        if self.mese == 4 or self.mese == 6 or self.mese == 9 or self.mese == 6 or self.mese == 9 or self.mese == 11:
            self.giorni_max = 30
        
        if self.giorno == self.giorni_max:
            self.mese += 1
            self.giorno = 1
            if self.mese == 13:
                self.anno += 1
                self.mese = 1
        
        return self


data = Date(17, 12, 2021)

print(data.__next__())