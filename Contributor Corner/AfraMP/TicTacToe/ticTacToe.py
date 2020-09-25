class ticTacToe:
    
    # method defining the possibilities of winnning
    def Possibilities(self, a, b):
        
        return ((a[0] == b and a[1] == b and a[2] == a[0]) or
            (a[3] == b and a[4] == b and a[5] == b) or
            (a[6] == b and a[7] == b and a[8] == b) or
            (a[0] == b and a[3] == b and a[6] == b) or
            (a[1] == b and a[4] == b and a[7] == b) or
            (a[2] == b and a[5] == b and a[8] == b) or
            (a[0] == b and a[4] == b and a[8] == b) or
            (a[2] == b and a[4] == b and a[6] == b))

    # method used to check the validity of the given input
    def validity(self, T):
        if 1 <= T <= 100:
            for i in range(T):
                countX = 0
                countO = 0
                a = input().split()
                for t in a:
                    if t == 'X':
                        countX += 1
                    else:
                        countO += 1
                if countO > (countX) or (countX > countO + 1) :
                    print("Invalid")
                elif self.Possibilities(a, 'X') and self.Possibilities(a, 'O'):
                    print("Invalid")
                elif self.Possibilities(a, 'O'):
                    if countX == countO:
                        print('Valid')
                    else:
                        print("Invalid")
                elif countO + 1 == countX or self.Possibilities(a, 'X'):
                    print("Valid")
                else:
                    print("Invalid")

# creating objects of class ticTacToe
chec = ticTacToe()
chec.validity(int(input()))