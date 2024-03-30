def ChkPrime(Num):
    for i in range(2, Num):
        if Num % i == 0:
            return False
    return True

def AddPrime(Num):
    PrimeSum = 0
    for i in Arr:
        if ChkPrime(i):
            PrimeSum = PrimeSum + Num
    return PrimeSum