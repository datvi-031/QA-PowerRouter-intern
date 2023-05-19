#include<bits/stdc++.h>
using namespace std;

class Stack {
private:
    std::queue<int> q1;
    std::queue<int> q2;

public:
    void push(int val) {
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Add the new element to q1
        q1.push(val);

        // Move all elements back to q1 from q2
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        if (is_empty()) {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        int top = q1.front();
        q1.pop();
        return top;
    }

    int top() {
        if (is_empty()) {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        return q1.front();
    }

    bool is_empty() {
        return q1.empty();
    }
};

void solve() {
	Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top: " << stack.top() << endl;
    cout << "Pop: " << stack.pop() << endl;
    cout << "Pop: " << stack.pop() << endl; 
    cout << "Top: " << stack.top() << endl;
    cout << "Pop: " << stack.pop() << endl;
    cout << "Pop: ";
    stack.pop();
	cout << "Is empty: " << boolalpha << stack.is_empty() << endl;
}

// main function
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	clock_t z = clock();
	solve();
	cerr << "Run time: " << ((double)(clock()-z)/CLOCKS_PER_SEC) << "\n";
	return 0;
}