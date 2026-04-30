class ListNode:
  def __init__(self,key=-1, value=-1, next=None):
    self.key=key
    self.value=value
    self.next=next

class HashMap:
  
    def __init__(self):
        self.map=[ListNode() for i in range(1000)]

    def hash(self, key):
        return key%len(self.map)

    def put(self, key:int, value: int)-> None:
        current=self.map[self.hash(key)]
        while current.next:
            if current.next.key==key:
                current.next.value=value
                return
            current = current.next
        current.next=ListNode(key,value)

    def get(self, key:int)-> int:
        current = self.map[self.hash(key)].next
        while current:
            if current.key==key:
                return current.value
            current=current.next
        return -1

    def remove(self, key:int)-> None:
        current=self.map[self.hash(key)]
        while current and current.next:
            if current.next.key==key:
                current.next=current.next.next
                return 
            current=current.next

if __name__ == "__main__":
    
    hm = HashMap()
    print("Putting (1, 1)")
    hm.put(1, 1)
    print("Putting (2, 2)")
    hm.put(2, 2)
    print("Getting 1:", hm.get(1))  
    print("Getting 3:", hm.get(3))  
    print("Putting (2, 1) to update value")
    hm.put(2, 1) 
    print("Getting 2:", hm.get(2))   
    print("Removing 2")
    hm.remove(2) 
    print("Getting 2:", hm.get(2))  


    