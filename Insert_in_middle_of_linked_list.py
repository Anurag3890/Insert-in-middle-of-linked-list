class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def insert_end(self,val):
        newnode=Node(val)
        if not self.head:self.head=newnode;return
        temp=self.head
        while temp.next:temp=temp.next
        temp.next=newnode

    def insert_middle(self,val):
        temp=self.head
        length=0
        while temp: length+=1; temp=temp.next
        pos=length//2
        newnode=Node(val)
        if pos==0: newnode.next=self.head; self.head=newnode; return
        temp=self.head
        for _ in range(pos-1): temp=temp.next
        newnode.next=temp.next
        temp.next=newnode

    def display(self):
        temp=self.head
        while temp: print(temp.data,end=" "); temp=temp.next
        print()

ll=LinkedList()
ll.insert_end(10); ll.insert_end(20); ll.insert_end(30)
ll.insert_middle(15)
ll.display()
