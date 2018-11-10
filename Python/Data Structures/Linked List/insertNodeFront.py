class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insertNode(self,data):

    def printList(self):
        temp = self.head
        while(temp):
            print(temp.data,end=" ")
            temp=temp.next
        print()