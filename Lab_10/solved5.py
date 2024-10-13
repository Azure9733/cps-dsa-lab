class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtBegin(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insertAtEnd(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        current_node = self.head
        while current_node.next:
            current_node = current_node.next
        current_node.next = new_node

    def updateNode(self, val, index):
        current_node = self.head
        position = 0
        while current_node and position != index:
            position += 1
            current_node = current_node.next
        if current_node:
            current_node.data = val
        else:
            print("Index not present")

    # Corrected indentation for remove_first_node method
    def remove_first_node(self):
        if self.head:
            self.head = self.head.next

    def remove_last_node(self):
        if self.head is None or self.head.next is None:
            self.head = None
        else:
            current_node = self.head
            while current_node.next.next:
                current_node = current_node.next
            current_node.next = None

    def remove_at_index(self, index):
        if self.head is None:
            return
        if index == 0:
            self.remove_first_node()
            return
        current_node = self.head
        position = 0
        while current_node and position + 1 != index:
            position += 1
            current_node = current_node.next
        if current_node and current_node.next:
            current_node.next = current_node.next.next
        else:
            print("Index not present")

    def remove_node(self, data):
        current_node = self.head
        prev_node = None
        while current_node and current_node.data != data:
            prev_node = current_node
            current_node = current_node.next
        if current_node:
            if prev_node:
                prev_node.next = current_node.next
            else:
                self.head = current_node.next

    def sizeOfLL(self):
        size = 0
        current_node = self.head
        while current_node:
            size += 1
            current_node = current_node.next
        return size

    def printLL(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" ")
            current_node = current_node.next
        print()

    def insertAtIndex(self, data, index):
        new_node = Node(data)
        if index == 0:
            self.insertAtBegin(data)
            return
        current_node = self.head
        position = 0
        while current_node and position < index - 1:
            current_node = current_node.next
            position += 1
        if current_node is None:
            print("Index out of bounds")
        else:
            new_node.next = current_node.next
            current_node.next = new_node

# create a new linked list
llist = LinkedList()
# add nodes to the linked list
llist.insertAtEnd('a-->')
llist.insertAtEnd('-->b-->')
llist.insertAtEnd('-->c-->')
llist.insertAtEnd('-->d-->')
llist.insertAtEnd('-->e-->')
llist.insertAtEnd('-->f')

# print the original linked list
print("\nOriginal Node Data of SLL")
llist.printLL()
print("\nSize of original linked list:", llist.sizeOfLL())  # Print size only once
print('\n')
llist.insertAtBegin('X<--')
llist.insertAtEnd('-->Y')
llist.insertAtIndex('g', 2)

# print the new linked list
print("\nUpdated Node Data of SLL")
llist.printLL()
print("\nSize of linked list after Updation:", llist.sizeOfLL())
print('\n')

# remove nodes from the linked list
llist.remove_first_node()
print("\nRemoved the First Node.\n#######")
llist.remove_last_node()
print("\nRemoved the Last Node. \n#######")

# print the linked list again
print("\nLinked list after removing nodes:")
llist.printLL()
print("\nSize of linked list after Updation:", llist.sizeOfLL())
