from random import *

""" Lista válidade de potências de 2 """
ns=[]

for i in range(64):
	ns.append(2**i)

""" Lista randomica de numeros """
rs=[]

for i in range(100):
	rs.append(randint(0,10000000))

rs.append(0)

ins=rs+ns
shuffle(ins)

inputs=open("in.txt","w")
outputs=open("out.txt","w")

for i in ins:
	inputs.write(str(i)+"\n")
	if i in ns:
		outputs.write("1\n")
	else:
		outputs.write("0\n")

inputs.close()
outputs.close()