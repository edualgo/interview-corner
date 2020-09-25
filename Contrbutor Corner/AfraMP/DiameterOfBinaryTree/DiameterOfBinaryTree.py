
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
