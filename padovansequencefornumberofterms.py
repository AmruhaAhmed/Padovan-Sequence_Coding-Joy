limit=int(input("Enter the number of terms:"))#number of terms
p0=1#first term of the series
p1=1#second term of the series
p2=1#third term of the series
pn=p0+p1#current term of the series
ctr=3#count of digits printed
print("{}\n{}\n{}".format(p0,p1,p2))
while(ctr<limit):
  print("{}".format(pn))
  ctr=ctr+1
  p0=p1
  p1=p2
  p2=pn
  pn=p0+p1
