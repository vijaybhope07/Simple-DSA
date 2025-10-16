class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, val):
        new_node = Node(val)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.val, end=" -> ")
            temp = temp.next
        print("None")


def find_middle(head):
    """
    Uses the slow and fast pointer technique.
    When fast reaches the end, slow will be at the middle.
    """
    slow = fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
    return slow


if __name__ == "__main__":
    ll = LinkedList()
    for val in [1, 2, 3, 4, 5]:
        ll.append(val)

    print("Linked List:")
    ll.print_list()

    middle_node = find_middle(ll.head)
    if middle_node:
        print(f"\nMiddle node value: {middle_node.val}")
    else:
        print("\nList is empty.")

