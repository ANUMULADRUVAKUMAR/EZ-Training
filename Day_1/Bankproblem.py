#Person is having 1lakh in is bank account rate of intrest is 12% per annum in the 5 month
#person is withdrawing 25000 in order to buy gift for his lover in 9 month 10000rs is being
#deposited in his account by his 2nd loved one, end of the financail year how much person is
#having in his account(simple intrest).
'''
n=100000
z=((n)*1/100)*4
n=n-25000
print(n)
k=((n)*1/100)*4
n=n+10000
d=((n)*1/100)*4
print(n)
print(n+k+d+z)'''
def calculate(PA,roi,month):
    z=0
    while (month<=12):
        interest = 0.01*PA
        z=z+interest
        if (month == 4):
            PA = PA - 25000
        elif month == 8:
            PA = PA + 10000
        month+=1
        pa = PA
    return z,pa

    
PA= 100000
roi = 1
month=1
a,pa = calculate(PA,roi,month)
print(pa+ a)