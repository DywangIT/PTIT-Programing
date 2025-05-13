#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct Node {
    int val;
    Node* left;
    Node* right;
};

using binTree = Node*;

binTree createNode(int val) {
    binTree node = new Node;
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

void bfs(binTree root) {
    if (!root) return;
    queue<binTree> q;
    stack<int> st;
    q.push(root);

    while (!q.empty()) {
        binTree current = q.front();
        q.pop();
        st.push(current->val);
        if (current->right) q.push(current->right);
        if (current->left) q.push(current->left);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        unordered_map<int, binTree> nodeMap;
        int parentVal, childVal;
        char direction;
        cin >> parentVal >> childVal >> direction;
        binTree root = createNode(parentVal);
        binTree child = createNode(childVal);

        if (direction == 'L') root->left = child;
        else root->right = child;
        nodeMap[parentVal] = root;
        nodeMap[childVal] = child;

        for (int i = 1; i < n; i++) {
            cin >> parentVal >> childVal >> direction;
            binTree childNode = createNode(childVal);
            if (direction == 'L') nodeMap[parentVal]->left = childNode;
            else nodeMap[parentVal]->right = childNode;
            nodeMap[childVal] = childNode;
        }
        bfs(root);
        cout << endl;
    }
    return 0;
}
