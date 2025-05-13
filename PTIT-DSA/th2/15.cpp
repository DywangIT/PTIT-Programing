#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct Node {
    int data;
    Node* left, * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* buildCompleteBinaryTree(const vector<int>& arr, int index) {
    if (index >= arr.size()) return nullptr;
    Node* root = new Node(arr[index]);
    root->left = buildCompleteBinaryTree(arr, 2 * index + 1);
    root->right = buildCompleteBinaryTree(arr, 2 * index + 2);
    return root;
}

void postOrderTraversal(Node* root, vector<int>& result) {
    if (!root) return;
    postOrderTraversal(root->left, result);
    result.push_back(root->data);
    postOrderTraversal(root->right, result);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Node* root = buildCompleteBinaryTree(arr, 0);
        vector<int> result;
        postOrderTraversal(root, result);
        for (int x : result) cout << x << " ";
        cout << endl;
    }
}