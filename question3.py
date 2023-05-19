from collections import deque

class Stack:
	def __init__(self):
		self.queue1 = deque()
		self.queue2 = deque()

	def push(self, val):
			while self.queue1:
				self.queue2.append(self.queue1.popleft())
			self.queue1.append(val)
			while self.queue2:
				self.queue1.append(self.queue2.popleft())

	def pop(self):
			if self.is_empty():
				print("Stack is empty")
				return None
			return self.queue1.popleft()

	def top(self):
			if self.is_empty():
				print("Stack is empty")
				return None
			return self.queue1[0]

	def is_empty(self):
		return len(self.queue1) == 0

stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)

print("Top:", stack.top()) 
print("Pop:", stack.pop()) 
print("Pop:", stack.pop()) 
print("Top:", stack.top())
print("Pop:", stack.pop())
print("Pop:", stack.pop())
print("Is empty:", stack.is_empty())