import random

def main():
	fl = open("I_in.txt","r+")
	for i in range(0,1000):
		rand = random.randint(1,100000)
		fl.write(str(rand) + "\n")

if __name__ == '__main__':
    main()