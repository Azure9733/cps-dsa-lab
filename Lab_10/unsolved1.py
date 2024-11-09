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

    def search(self, key):
        return self._search_recursive(self.root, key)

    def _search_recursive(self, root, key):
        if root is None or root.val == key:
            return root
        if key < root.val:
            return self._search_recursive(root.left, key)
        return self._search_recursive(root.right, key)

    def delete(self, key):
        self.root = self._delete_recursive(self.root, key)

    def _delete_recursive(self, root, key):
        if root is None:
            return root
        if key < root.val:
            root.left = self._delete_recursive(root.left, key)
        elif key > root.val:
            root.right = self._delete_recursive(root.right, key)
        else:
            if root.left is None:
                return root.right
            elif root.right is None:
                return root.left

            min_node = self._min_value_node(root.right)
            root.val = min_node.val
            root.right = self._delete_recursive(root.right, min_node.val)
        return root

    def _min_value_node(self, node):
        current = node
        while current.left is not None:
            current = current.left
        return current

    def inorder(self):
        self._inorder_recursive(self.root)

    def _inorder_recursive(self, root):
        if root:
            self._inorder_recursive(root.left)
            print(root.val, end=" ")
            self._inorder_recursive(root.right)

def main():
    bst = BinarySearchTree()
    n = int(input("Enter the number of nodes: "))
    for _ in range(n):
        key = int(input("Enter node value: "))
        bst.insert(key)
    
    print("\nTree (in-order traversal):")
    bst.inorder()
    print()

    key = int(input("\nEnter the key to search: "))
    node = bst.search(key)
    if node:
        print(f"Node with key {key} found.")
    else:
        print(f"Node with key {key} not found.")

    key = int(input("\nEnter the key to delete: "))
    bst.delete(key)
    print("\nTree after deletion (in-order traversal):")
    bst.inorder()
    print()

if __name__ == "__main__":
    main()
