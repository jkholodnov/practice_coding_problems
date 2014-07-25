#http://www.reddit.com/r/dailyprogrammer/comments/2avd5i/7162014_challenge_171_intermediate_zoom_rotate/
import sys

def main(theargument):
    def printArray(thearray):
        for row in thearray:
            for char in row:
                sys.stdout.write(char)
            sys.stdout.write('\n')
    def fixArray(g):
        newDict= {
            '0' : ' ',
            '1' : '#',
            '\n': '\n'
        }
        multi_dim_array = []
        
        row = []
        for char in g:
            if(char != '\n'):
                row.append(newDict[char])
            if(char == '\n'):
                multi_dim_array.append(row)     #put the current row onto the array list
                row = []                        #reset row
        multi_dim_array.append(row)
        return multi_dim_array

    def zoom(two_dim_array):
        multi_dim_array = []
        row = []
        for line in two_dim_array:
            for char in line:
                row.append(char)
                row.append(char)
            multi_dim_array.append(row)         #double the content to the right
            multi_dim_array.append(row)         #double the doubled row
            row = []
        return multi_dim_array

    def invert(toinvert):
        multi_dim_array = []
        row = []
        dict = {
            '#' : ' ',
            ' ' : '#',
            '\n' : '\n'
        }
        for line in toinvert:
            for char in line:
                row.append(dict[char])
            multi_dim_array.append(row)
            row = []
        return multi_dim_array

    def rotate(torotate,direction):
        multi_dim_array = []
        fixedRow = []

        numRows = len(torotate)
        chars_per_row = len(torotate[0])

        print numRows
        print chars_per_row
        




        if(direction=="clockwise"):
            for i in range(chars_per_row):
                for j in range(numRows):
                    currentRow = numRows - j
                    fixedRow.append(torotate[j][i])
                multi_dim_array.append(fixedRow)
                fixedRow = []
            return multi_dim_array
        if(direction=="counterclockwise"):
            print "ccw"

    dict = {
    '0': '0000', 
    '1': '0001', 
    '2': '0010',
    '3': '0011',
    '4': '0100',
    '5': '0101',
    '6': '0110',
    '7': '0111',
    '8': '1000',
    '9': '1001',
    'A': '1010',
    'B': '1011',
    'C': '1100',
    'D': '1101',
    'E': '1110',
    'F': '1111',
    ' ': '\n'
    }
    

    output = ""
    for i in range(len(theargument)):
        output = output + str( dict[theargument[i]])        #string of the hex converted to bitcode, 1's turn to "#", 0's turn to " "
    fixed = fixArray(output)
    
    printArray(zoom(invert(zoom(rotate(zoom(fixed),"clockwise")))))

    
    
main("3E 7F FC F8 F8 FC 7F 3E")