# Imports
import sys
import getopt
import random

def gen_random(a, b):
    rand = random.uniform(a,b)
    return rand

def gen(file, numof_column, numof_tests, input_exit):
    print "Opening file..."
    fl = open(file,"r+")

    # When stops with a input like 0 0 0 0
    if(input_exit):
        print "Stops with 0 0 0 0"
    else:
        print "Runs " + str(numof_tests) + " tests"

def gets_opts():
    # Gets user inputs
    flags = "file= column= tests= input_exit="
    try:
        opts, args = getopt.getopt(sys.argv[1:],"", flags.split())
    except getopt.GetoptError as error:
        print_error()
    return opts

def print_error():
    print str("python randnum.py --file [file_dir] --column [number_of_columns] --tests [number_of_tests] --input_exit [exit_with_zero]")
    sys.exit(2)

def main():

    opts = gets_opts()
    file = ""
    numof_column = ""
    numof_tests = ""
    input_exit = ""

    # Locate the inputs on var
    for option, attribute in opts:
        if(option == "--file"):
            file = attribute
        elif(option == "--column"):
            numof_column = int(attribute)
        elif(option == "--tests"):
            numof_tests = int(attribute)
        elif(option == "--input_exit"):
            if(attribute.lower() == "true"):
                input_exit = True
            elif(attribute.lower() == "false"):
                input_exit = False
            else:
                print_error()

    # Wrong usage
    if(file == '' or numof_column == '' or numof_tests == '' or input_exit == ''):
        print_error()

    # Execute generator
    gen(file, numof_column, numof_tests, input_exit)

if __name__ == '__main__':
    main()
