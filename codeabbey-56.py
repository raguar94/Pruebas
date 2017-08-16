"""This code shows the number of organisms remaining at the end of the turn
for a certain quantity of turns, the remaining organisms are obtained
by the rules of game of life by Jhon Conway"""

turns = 5
board2 = []
board = []
for i in range(5):
    board.append(raw_input())

for i in range(50):
    for j in range(50):
      board2.append([])
      if (i >= 23 and i <= 27) and (j >= 23 and j <= 29):
        board2[i].append(board[i-23][j-23])
      else:
        board2[i].append("-")

for i in range(turns):
    organisms = 0
    for j in range(1, 49):
        for k in range(1, 49):
            grimm = 0
            if (board2[j][k+1] == "X") or (board2[j][k+1] == "D"):
                grimm += 1
            if (board2[j+1][k] == "X") or (board2[j+1][k] == "D"):
                grimm += 1
            if (board2[j+1][k+1] == "X") or (board2[j+1][k+1] == "D"):
                grimm += 1
            if (board2[j][k-1] == "X") or (board2[j][k-1] == "D"):
                grimm += 1
            if (board2[j-1][k] == "X") or (board2[j-1][k] == "D"):
                grimm += 1
            if (board2[j-1][k-1] == "X") or (board2[j-1][k-1] == "D"):
                grimm += 1
            if (board2[j-1][k+1] == "X") or (board2[j-1][k+1] == "D"):
                grimm += 1
            if (board2[j+1][k-1] == "X") or (board2[j+1][k-1] == "D"):
                grimm += 1
            if (grimm < 2 or grimm > 3) and (board2[j][k] == "X"):
                board2[j][k] = "D"
            if (grimm == 3) and (board2[j][k] == "-"):
                board2[j][k] = "B"
    
    for j in range(1, 49):
        for k in range(1, 49):
            if board2[j][k] == "D":
                board2[j][k] = "-"
            if board2[j][k] == "B":
                board2[j][k] = "X"
    
    for j in range(50):
        for k in range(50):
            if board2[j][k] == "X":
                organisms += 1
                
print str(organisms) + " "
