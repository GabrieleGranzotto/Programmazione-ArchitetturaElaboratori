nums = [i for i in range(1,1001)]
string = "Practice Problems to Drill List Comprehension in Your Head."



punto1 = [num for num in nums if num % 8 == 0]



punto2 = [num for num in nums if "6" in str(num)]


spazi = [s for s in string if s==" "]
len_spazi = len(spazi)



parole = string.split()
risposta = [s for s in parole if len(s)<5]
numero_parole = len(risposta)