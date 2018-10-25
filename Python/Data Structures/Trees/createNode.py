class Node:
    def __init__(self,data):
        self.left = None
        self.right = None
        self.data = data
    
    def printTree(self):
        print(self.data);

if __name__ == '__main__':
    root = Node(10)

    root.printTree()