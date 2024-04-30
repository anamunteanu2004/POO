#include <iostream>
#include <functional> 
#include <algorithm> 

template <typename T>
class TreeNode {
private:
    T value;
    TreeNode* parent;
    TreeNode* children[100]; 
    size_t childCount;

public:
    TreeNode(const T& val, TreeNode* par = nullptr) : value(val), parent(par), childCount(0) {
        for (int i = 0; i < 100; ++i) {
            children[i] = nullptr;
        }
    }

    TreeNode* add_node(const T& val); 
    TreeNode* get_node(TreeNode* par); 
    void delete_node(TreeNode* node); 
    TreeNode* find(std::function<bool(const T&)> predicate); 
    void insert(TreeNode* parent, const T& val, size_t index); 
    void sort(std::function<bool(const T&, const T&)> compare = nullptr); 
    size_t count(TreeNode* node = nullptr); 
};

template<typename T>
TreeNode<T>* TreeNode<T>::add_node(const T& val) {
    if (childCount < 100) {
        children[childCount] = new TreeNode(val, this);
        ++childCount;
        return children[childCount - 1];
    }
    else {
        std::cerr << "Nu se pot adauga mai multe noduri. S-a ajuns la limita maxima." << std::endl;
        return nullptr;
    }
}

template<typename T>
TreeNode<T>* TreeNode<T>::get_node(TreeNode* par) {
    if (!par)
        return this;
    for (size_t i = 0; i < childCount; ++i) {
        if (children[i] == par)
            return children[i];
        else {
            TreeNode* node = children[i]->get_node(par);
            if (node) return node;
        }
    }
    return nullptr;
}

template<typename T>
void TreeNode<T>::delete_node(TreeNode* node) {
    if (!node) return;

    for (size_t i = 0; i < childCount; ++i) {
        if (children[i] == node) {
            delete children[i];
            for (size_t j = i; j < childCount - 1; ++j) {
                children[j] = children[j + 1];
            }
            --childCount;
            return;
        }
    }
}

template<typename T>
TreeNode<T>* TreeNode<T>::find(std::function<bool(const T&)> predicate) {
    if (predicate(value))
        return this;
    for (size_t i = 0; i < childCount; ++i) {
        TreeNode* node = children[i]->find(predicate);
        if (node) return node;
    }
    return nullptr;
}

template<typename T>
void TreeNode<T>::insert(TreeNode* parent, const T& val, size_t index) {
    if (index >= childCount) {
        add_node(val);
    }
    else {
        for (size_t i = childCount; i > index; --i) {
            children[i] = children[i - 1];
        }
        children[index] = new TreeNode(val, parent);
        ++childCount;
    }
}

template<typename T>
void TreeNode<T>::sort(std::function<bool(const T&, const T&)> compare) {
    if (!compare)
        compare = [](const T& a, const T& b) { return a < b; };

    std::sort(children, children + childCount, [&](TreeNode* a, TreeNode* b) {
        return compare(a->value, b->value);
        });

    for (size_t i = 0; i < childCount; ++i) {
        children[i]->sort(compare);
    }
}

template<typename T>
size_t TreeNode<T>::count(TreeNode* node) {
    if (!node) node = this;
    size_t cnt = 1; 
    for (size_t i = 0; i < node->childCount; ++i) {
        cnt += count(node->children[i]);
    }
    return cnt;
}
