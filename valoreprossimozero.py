class Function:
    
    def eval(self, x):
        pass

class IntervalFunction(Function):

    def __init__(self, a, b):
        self.a = a
        self.b = b

    def eval(self, x):
        if (x<self.a or x>self.b):
            raise Exception 
        else:
            pass