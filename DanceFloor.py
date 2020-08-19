import sys

class DanceFloor:
  def findSolution(self, N, C, D, S, tileColors, marks):

  	ret = [0]*S

  	x = [0]*D
  	y = [0]*D
  	for i in range(D):
  		x[i] = marks[i][0]
  		y[i] = marks[i][1]

  	for i in range(S):
  		cmd=""
  		for j in range(D):
  			k=2
  			while k < len(marks[j]):
  				if marks[j][k] >= i+1: break
  				k+=3

  			xd = marks[j][k - 2]
  			yd = marks[j][k - 1]
  			if (xd > x[j]):
  				x[j]+=1
  				cmd +='R'
  			elif (xd < x[j]):
  				x[j]-=1
  				cmd +='L'
  			elif (yd > y[j]):
  				y[j]+=1
  				cmd +='D'
  			elif (yd < y[j]):
  				y[j]-=1
  				cmd +='U'
  			else:
  				cmd += '-'

  			ret[i] = cmd

  	return ret


N = int(input())
C = int(input())
D = int(input())
S = int(input())

tileColors=[0]*N
for y in range(N):
	tileColors[y]=[0]*N
	for x in range(N):
		tileColors[y][x]=input()

marks=[0]*D
for i in range(D):
	numMarks=int(input())
	marks[i]=[0]*(3*numMarks)
	s=input().split(" ")
	for j in range(3*numMarks):
		marks[i][j]=int(s[j])
  
prog = DanceFloor()
ret = prog.findSolution(N, C, D, S, tileColors, marks)
print(len(ret))
for st in ret:
  print(st)
sys.stdout.flush()