#~/Desktop $ python3 ./P.py    

cars=5.333
buses=10
name= "AMTS"
ml='''multi
line'''
print ("Total vehicles are ", cars+buses, 
        name+'\tcars are',cars+2-3, 
        "{} {}".format(buses,name),
        "{0:0.4f} {1:+^10}".format(cars/2,name),
        (name*3),
        2*3,2**3,5%2, "\n",
        3<<1,3>>1,2<<1,2>>1,7<<1,7>>1, "\n",
        3<<2,3>>2,2<<2,2>>2,7<<2,7>>2, "\n",
        2&3,3&4,2|3,3|4,2 ^ 3,3 ^ 4, ~3,
        5<3,5>3,5>=3,5<=3,3==3,not(3!=3), 1 and 0, 0 or 1,
        ml)


def Print(name, buses):
  print ("This is wonderful {0:+^20} {1}".format(name, buses))


Print("BRTS",200)

guess = int(raw_input('enter an integer:'))
