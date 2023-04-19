n=int(input(("Enter a number:")))#number till which the series is printed
p0=1#first term of the series
p1=1#second term of the series
p2=1#third term of the series
pn=p1+p0#n'th term of the series
print("{}\n{}\n{}".format(p0,p1,p2))
while(pn<=n):
  print("{}".format(pn))
  p0=p1
  p1=p2
  p2=pn
  pn=p0+p1
