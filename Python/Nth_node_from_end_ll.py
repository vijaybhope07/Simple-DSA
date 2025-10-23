class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, value):
        new_node = Node(value)
        if not self.head:
            self.head = new_node
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node

    def display(self):
        values = []
        current = self.head
        while current:
            values.append(current.value)
            current = current.next
        return values
    
def del_nth_node_from_end(linked_list, n):
    main_ptr = linked_list.head
    ref_ptr = linked_list.head

    count = 0
    if linked_list.head is not None:
        while count < n:
            if ref_ptr is None:
                return None 
            ref_ptr = ref_ptr.next
            count += 1
    if ref_ptr is None:
        linked_list.head = linked_list.head.next
        return main_ptr.value
    while ref_ptr.next is not None:
        main_ptr = main_ptr.next
        ref_ptr = ref_ptr.next
    
    val = main_ptr.next.value
    main_ptr.next = main_ptr.next.next

    return val if main_ptr.next else None

if __name__ == "__main__":
    ll = LinkedList()
    ll.append(10)
    ll.append(20)
    ll.append(30)
    ll.append(40)
    ll.append(50)

    n = 2
    result = del_nth_node_from_end(ll, n)
    new_ll = ll.display()
    if result is not None:
        print(f"Deleted the {n}th node from the end : {result}")
        print("Updated Linked List:", new_ll)
    else:
        print(f"The list is shorter than {n} nodes.")