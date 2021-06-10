class Node:
    def __init__(self,data):
        self.data= data
        self.next= None
class LinkedList:
    def __init__(self):
        self.head = None
#..........................................traversal...............................................
    def printlist(self):
        if self.head is None:
            print("linkedlist is empty!")
        else:
            n=self.head
            while n is not None:
                print(n.data,"--->",end=" ")
                n=n.next
 #.....................................insert the node at beginning...............................................
        
    def push(self,data):
        new_node = Node(data)
        new_node.next= self.head
        self.head = new_node
        
#.................................insert the node at end................................................................

    def end(self,data):
        new_node= Node(data)
        
        if self.head is None:
            self.head=new_node
        else:
            n=self.head
            while n.next is not None:
                n=n.next
            n.next=new_node
            
#..................................insert node at middle......................................................

    def insertafter(self,prev,data):
        if prev is None:
            print("linked list is empty!")
            return
        new_node = Node(data)
        new_node.next=prev.next
        prev.next = new_node
        
            
                
ll=LinkedList()
ll.push(10)
ll.end(100)
ll.push(20)
ll.insertafter(ll.head.next,8)
ll.push(30)
ll.end(500)

ll.printlist()
    