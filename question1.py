from collections import defaultdict

def answer(v):
    charCount = defaultdict(int)
    
    if len(v) % 2 == 0:
        return v[0]
    
    for ch in v:
        charCount[ch] += 1
    
    for ch, count in charCount.items():
        if count % 2 != 0:
            return ch
    
    return None

def solve():
    v = ['a', 'm', 'm', 'a', 'd']
    v2 = ['r', 'e', 'd', 'i', 'v', 'i', 'd', 'e', 'r']
    
    print(answer(v))
    print(answer(v2))

if __name__ == '__main__':
    solve()
