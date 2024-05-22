#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    TreeNode* root;

public:
    BinarySearchTree() : root(nullptr) {}

    // 삽입 메서드
    void insert(int value) {
        root = insertRecursive(root, value);
    }

    // 재귀적으로 노드를 삽입하는 메서드
    TreeNode* insertRecursive(TreeNode* current, int value) {
        if (current == nullptr) {
            return new TreeNode(value);
        }

        if (value < current->data) {
            current->left = insertRecursive(current->left, value);
        }
        else if (value > current->data) {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

    // 탐색 메서드
    bool search(int value) {
        return searchRecursive(root, value);
    }

    // 재귀적으로 노드를 탐색하는 메서드
    bool searchRecursive(TreeNode* current, int value) {
        if (current == nullptr) {
            return false;
        }

        if (current->data == value) {
            return true;
        }

        if (value < current->data) {
            return searchRecursive(current->left, value);
        }
        else {
            return searchRecursive(current->right, value);
        }
    }
    // 중위 순회로 트리 출력
void inorderTraversal(TreeNode* current) {
    if (current != nullptr) {
        inorderTraversal(current->left);
        std::cout << current->data << " ";
        inorderTraversal(current->right);
    }
}

// 전위 순회로 트리 출력
void preorderTraversal(TreeNode* current) {
    if (current != nullptr) {
        std::cout << current->data << " ";
        preorderTraversal(current->left);
        preorderTraversal(current->right);
    }
}

// 외부에서 호출하기 위한 중위 순회 메서드
void printInorder() {
    inorderTraversal(root);
    std::cout << std::endl;
}

// 외부에서 호출하기 위한 전위 순회 메서드
void printPreorder() {
    preorderTraversal(root);
    std::cout << std::endl;
}

};

int main() {
    BinarySearchTree tree;

    // 노드 삽입
    tree.insert(44);
    tree.insert(14);
    tree.insert(26);
    tree.insert(42);
    tree.insert(35);
    tree.insert(10);
    tree.insert(27);
    tree.insert(33);
    tree.insert(19);
    tree.insert(31);

   // 중위 순회로 트리 출력
    std::cout << "Inorder Traversal: ";
    tree.printInorder();

    // 전위 순회로 트리 출력
    std::cout << "Preorder Traversal: ";
    tree.printPreorder();
    return 0;
}
