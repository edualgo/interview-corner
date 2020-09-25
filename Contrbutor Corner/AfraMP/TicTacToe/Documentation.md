# DOCUMENTATION
## Tic-Tac-Toe
![Github Logo](https://camo.githubusercontent.com/8cf04a6dcc08ed39b13778a727819581acc566e5/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d416d617a6f6e2d626c7565)
![Github Logo](https://camo.githubusercontent.com/e579fafbb1bdb9e720e3f9c7eee3874223ef71e5/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d507974686f6e2d627269676874677265656e)
![Github Logo](https://camo.githubusercontent.com/d4fa9897ff15062a43ea2ef2957d088d3a5d9035/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d4c656574636f64652d76696f6c6574)<br>
**Problem Statement**<br>
A Tic-Tac-Toe board is given after some moves are played. Find out if the given board is valid, i.e., is it possible to reach this board position after some moves or not.

Note that every arbitrary filled grid of 9 spaces isn’t valid e.g. a grid filled with 3 X and 6 O isn’t valid situation because each player needs to take alternate turns.

Note :  The game starts with X<br>
![Github Logo](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcSY0hjW057ZLjMY2dozuglqt1Uge2l-ckJ2FA&usqp=CAU)
```
Example 1
2
X X O O X O O O O 
X X O O O X X O X
```
> > Invalid<br>
> > Valid
```
Example 2

1
O X X X O X O O X
```
> > Valid

#### Solution<br>
In this problem we check the validity of the given inputs of a tic-tac-toe game. The game involves two players 'X' and 'O' who take turns marking the spaces in a 3×3 grid. There are 8 strategies in order to win this game.<br>
Consider player 'X', if 'X' occupies one of the row or one of the column or occupies the diagonals of grid then 'X' wins. If 'X' wins then the game ends which also applies to 'O'.
CONDITIONS TO CHECK IF INPUTS ARE INVALID:<br>
* If both player 'X' and 'O' wins
* When 'O' takes a chance after 'X' wins or vice versa
* When number of 'X' exceed number of 'O' by two or more
* When number of 'O's are greater than 'X'

CHECKING THE VALIDITY:<br>
* Number of 'X' exceeds number of 'O' if 'X' wins.
* Number of 'X' and 'O' equal only if 'O' wins.
* Number of 'X' exceed number of 'O' by 1 not greater than that.

POSSIBILITIES OF WINNING A GAME:
* 'X' occupies one of the row or 'O' occupies one of the row.
* 'X' occupies one of the column or 'O' occupies one of the column.
* 'X' occupies one of the diagonals in the grid or 'O' occupies one of the diagonals in the grid.


![Github Logo](http://d1hyf4ir1gqw6c.cloudfront.net/wp-content/uploads/tictactoe.png)
#### Psuedocode<br>
PROGRAM ticTacToe<br>
// Possibilities() is a function to represent possible ways of winnning<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;INPUT: Read T, a<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; SET countX = 0<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; SET countY = 0<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; FOR each element in a<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; IF element = 0 THEN<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; INCREMENT countX<br></br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ELSE<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; INCREMENT countO<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; END IF<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; IF countO > countX or countX > countO + 1 THEN<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; PRINT Invalid<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ELSE IF Possibilities(a, 'X') and Possibilities(a, 'O') THEN<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; PRINT Invalid<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ELSE IF Possibilities(a, 'O') THEN<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; END IF<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; END FOR<br>
END<br>



