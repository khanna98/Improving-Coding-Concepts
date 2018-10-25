class Node:
    
    def __init__(self, data):

        self.left = None
        self.right = None
        self.data = data

# Insert method to create nodes
    def insert(self, data):

        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

# Seach function to find a node
    def findVal(self,val):
        if val < self.data:
            if self.left is None:
                return str(val) + " Not Found"
            return self.left.findVal(val)
        elif val > self.data:
            if self.right is None:
                return str(val) + " Not Found"
            return self.right.findVal(val)
        else:
            return str(self.data) + " is Found"
    
    def printTree(self):
        if self.left:
            self.left.printTree()
        print(self.data,end=" ")
        if self.right:
            self.right.printTree()


if __name__ == '__main__':
    root = Node(12)
    root.insert(6)
    root.insert(14)
    root.insert(3)
    root.insert(13)

    print(root.findVal(14))
    print(root.findVal(7))

    root.printTree()
    print()