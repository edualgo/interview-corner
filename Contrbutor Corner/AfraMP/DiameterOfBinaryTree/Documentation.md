# DOCUMENTATION
## DIAMETER OF BINARY TREE<br>
<a><img src="https://img.shields.io/badge/-Amazon-blue" height="25">&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Interview Bit-navy" height="25">
&nbsp;&nbsp;<img src= "https://img.shields.io/badge/-Python-red" height="25">&nbsp;&nbsp;
<a><img src="https://img.shields.io/badge/-Philips-blue" height="25"></a><br>
**Problem Statement**<br>
Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two leaves in the tree. The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).
![image](http://geeksforgeeks.org/wp-content/uploads/tree_diameter.GIF)
```
Example 1

       1
     /  \
    2    3
```
> > 3
```
Example 2

         10
        /   \
      20    30
    /   \ 
   40   60
```
> > 4
#### Solution<br>
```
class Node:

    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right

def getDiameter(root, diameter):

    if root is None:
        return 0, diameter

    left_height, diameter = getDiameter(root.left, diameter)
    right_height, diameter = getDiameter(root.right, diameter)
    max_diameter = left_height + right_height + 1
    diameter = max(diameter, max_diameter)
    return max(left_height, right_height) + 1, diameter

def getBTDiameter(root):

    diameter = 0
    return getDiameter(root, diameter)[1]

if __name__ == '__main__':

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.right = Node(4)
    root.right.left = Node(5)
    root.right.right = Node(6)
    root.right.left.left = Node(7)
    root.right.left.right = Node(8)
    print("The diameter of the tree is", getBTDiameter(root))
```