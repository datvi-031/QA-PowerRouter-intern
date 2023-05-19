from collections import Counter

def printLists(lst):
    counter = Counter(lst)
    lst1 = [num for num, count in counter.items() if count > 1]
    lst2 = [num for num, count in counter.items() if count == 1]
    
    print("List-1 [Duplicates]: ", lst1)
    print("List-2 [Non Duplicates]: ", lst2)


lst = [1, 5, 1, 3, 7, 21, 25, 2, 5, 3, 21]
printLists(lst)
