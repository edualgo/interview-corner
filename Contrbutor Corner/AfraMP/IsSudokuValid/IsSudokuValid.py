class Sudoku:   
    
    # method used to check validity of the inputs in sudoku
    def solution(self):
        T = int(input())
        for i in range(T):
            mat = [x for x in input().replace("0",".").split()]
            array = []
            for i in range(0,81,9):
                array.append(mat[i:i+9])
                row = [set() for _ in range(0,9)]
                col = [set() for _ in range(0,9)]
                box = [set() for _ in range(0,9)]
                flag = True
            for i in range(0,9):
                for j in range(0,9):
                    num = array[i][j]
                    if num == ".":
                        continue
                    if num in row[i] or num in col[j] or num in box[(i//3)*3 + j // 3]:
                        flag = False
                        break
                    row[i].add(num)
                    col[j].add(num)
                    box[i//3*3 + j // 3].add(num)
            if flag:
                print(1)
            else:
                print(0)
a = Sudoku()
a.solution()