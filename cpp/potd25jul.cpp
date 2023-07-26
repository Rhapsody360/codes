//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

vector<int> findSpiral(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        vector<int> vec = findSpiral(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}



// } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
 
        // Compute the height of each subtree
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        // Use the larger one
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
vector <int> printGivenLevel(Node* root, int level, int ltr, vector <int> ans)
{
    if (root == NULL)
        return ans;
    if (level == 1)
        ans.push_back(root->data);
         
    else if (level > 1) {
        if (ltr) {
            printGivenLevel(root->left, level - 1, ltr,ans);
            printGivenLevel(root->right, level - 1, ltr,ans);
        }
        else {
            printGivenLevel(root->right, level - 1, ltr,ans);
            printGivenLevel(root->left, level - 1, ltr,ans);
        }
    }
    return ans;
}
//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector <int> ans;
    int h =height(root);
    int i =1;
    bool itr =false;
    vector <int> pushtoans;
    for(int i = 1;i<=h;i++){
        pushtoans = printGivenLevel(root,i,itr,ans);
        for (auto i:pushtoans){
            ans.push_back(i);
        }
        itr=!itr;
    }
    return ans;
}
