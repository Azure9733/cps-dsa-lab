class TreeNode:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, key):
        self.root = self._insert_recursive(self.root, key)

    def _insert_recursive(self, root, key):
        if root is None:
            return TreeNode(key)
        if key < root.val:
            root.left = self._insert_recursive(root.left, key)
        else:
            root.right = self._insert_recursive(root.right, key)
        return root

    def find_min(self):
        current = self.root
        while current.left is not None:
            current = current.left
        return current.val if current else None

    def find_max(self):
        current = self.root
        while current.right is not None:
            current = current.right
        return current.val if current else None

    def inorder(self):
        self._inorder_recursive(self.root)

    def _inorder_recursive(self, root):
        if root:
            self._inorder_recursive(root.left)
            print(root.val, end=" ")
            self._inorder_recursive(root.right)
def main():
    bst1 = BinarySearchTree()
    bst2 = BinarySearchTree()

    print("\nCreating Tree 1")
    n1 = int(input("Enter the number of nodes for Tree 1: "))
    for _ in range(n1):
        key = int(input("Enter node value: "))
        bst1.insert(key)
    
    

    print("\nCreating Tree 2")
    n2 = int(input("Enter the number of nodes for Tree 2: "))
    for _ in range(n2):
        key = int(input("Enter node value: "))
        bst2.insert(key)
    print("===============Minimum Value====================")
    print(f"\nThe Minimum value in Tree 1: {bst1.find_min()}")
    print(f"\nThe Minimum value in Tree 2: {bst2.find_min()}")
    print("===============Maximum Value====================")
    print(f"\nThe Maximum value in Tree 1: {bst1.find_max()}")
    print(f"\nThe Maximum value in Tree 2: {bst2.find_max()}")

if __name__ == "__main__":
    main()
