#include<iostream>
using namespace std;

// Forward declaration of Dictionary class
class Dictionary;

// Node class representing a word and its meaning
class node {
public:
    string word;
    string meaning;
    node* left;
    node* right;

    node(string x, string y) {
        this->word = x;
        this->meaning = y;
        this->left = NULL;
        this->right = NULL;
    }
    friend class Dictionary;
};

// Dictionary class with operations to manage nodes
class Dictionary {
public:
    node* root, * q;

    // Constructor to initialize dictionary
    Dictionary() {
        root = NULL;
        q = NULL;
    }

    // Insert function to add a word and its meaning to the dictionary
    void insert(node* &p, string key, string key_meaning) {
        if (p == NULL) {
            p = new node(key, key_meaning);
        }
        else if (key < p->word) {
            insert(p->left, key, key_meaning);
        }
        else {
            insert(p->right, key, key_meaning);
        }
    }

    // Print elements in ascending order (inorder traversal)
    void printAsc(node* p) {
        if (p != NULL) {
            printAsc(p->left);
            cout << p->word << " : " << p->meaning << endl;
            printAsc(p->right);
        }
    }

    // Print elements in descending order
    void printDEC(node* p) {
        if (p != NULL) {
            printDEC(p->right);
            cout << p->word << " : " << p->meaning << endl;
            printDEC(p->left);
        }
    }

    // Compare a given word with dictionary entries and count comparisons
    void comparison(node* p, string key) {
        int count = 0;
        while (p != NULL) {

            if (key < p->word) {
                count++;
                p = p->left;
            }
            else if (key > p->word) {
                count++;
                p = p->right;
            }
            else { 
                count++;
                cout<<"the key is Found"<<endl;
                cout << "The Number of Comparisons to find the word '" << key << "' is " << count << endl;
                return;
            }
        }
        cout << "Word Not Found" << endl;
    }

    // Update the meaning of a node in the dictionary
    void updateNode(node* p, string key) {
        while (p != NULL) {
            if (key < p->word) {
                p = p->left;
            }
            else if (key > p->word) {
                p = p->right;
            }
            else { // key == p->word
                cout << "Enter the new meaning for '" << key << "':" << endl;
                cin >> p->meaning;
                return;
            }
        }
        cout << "Word Not Found" << endl;
    }

    // Delete a node from the dictionary based on the word
    void DeleteNode(node* &p, string key) {
        if (p == NULL) {
            cout << "Word Not Found" << endl;
            return;
        }

        if (key < p->word) {
            DeleteNode(p->left, key);
        }
        else if (key > p->word) {
            DeleteNode(p->right, key);
        }
        else { // key == p->word
            if (p->left == NULL && p->right == NULL) { // No child
                delete p;
                p = NULL;
            }
            else if (p->right == NULL) { // Only left child
                node* temp = p;
                p = p->left;
                delete temp;
            }
            else if (p->left == NULL) { // Only right child
                node* temp = p;
                p = p->right;
                delete temp;
            }
            else { // Both children
                node* temp = min_node(p->right);
                p->word = temp->word;
                p->meaning = temp->meaning;
                DeleteNode(p->right, temp->word);
            }
        }
    }

    // Find the minimum node in a subtree
    node* min_node(node* p) {
        while (p->left != NULL) {
            p = p->left;
        }
        return p;
    }
};

int main() {
    // Create a Dictionary instance
    Dictionary dict;

    // Insert words and their meanings into the dictionary
    dict.insert(dict.root, "apple", "a fruit");
    dict.insert(dict.root, "banana", "a yellow fruit");
    dict.insert(dict.root, "cherry", "a red fruit");
    dict.insert(dict.root, "orange", "a citrus fruit");

    // Print elements in ascending order (sorted)
    cout << "Ascending Order:" << endl;
    dict.printAsc(dict.root);

    // Print elements in descending order
    cout << "\nDescending Order:" << endl;
    dict.printDEC(dict.root);

    // Example usage of comparison function
    string searchWord = "banana";
    cout << "\nSearching for '" << searchWord << "' in the dictionary:" << endl;
    dict.comparison(dict.root, searchWord);

    // Example usage of updateNode function
    string updateWord = "banana";
    
    cout << "\nUpdating the meaning of '" << updateWord << "' in the dictionary:" << endl;
    dict.updateNode(dict.root, updateWord);

    // Print elements in ascending order after update
    cout << "\nAscending Order after update:" << endl;
    dict.printAsc(dict.root);

    // Example usage of DeleteNode function
    string deleteWord = "cherry";
    cout << "\nDeleting the word '" << deleteWord << "' from the dictionary:" << endl;
    dict.DeleteNode(dict.root, deleteWord);

    // Print elements in ascending order after deletion
    cout << "\nAscending Order after deletion:" << endl;
    dict.printAsc(dict.root);

    return 0;
}
