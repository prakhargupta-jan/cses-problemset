/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
/*
Approaches:
    1. Brute
        i. using arrays to simulate the elimination behaviors and rewriting the array through the each revolution
        ii. using LinkedList

*/

class Node {
public:
    ll val;
    Node* prev;
    Node* next;
    Node (ll val) {
        this->val = val;
    }
    Node (ll val, Node* prev, Node* next) {
        this->prev = prev;
        this->next = next;
        this->val = val;
    }
};

// int main()
// {
//     ios::sync_with_stdio(0);cin.tie(0);
//     ll n;
//     cin >> n;
//     vector<int> v(n+2);
//     for (int i = 0; i < n; i++) {
//         v[i] = i+1;
//     }
//     bool first = true, prevOdd = false;

//     while (n > 1) {
//         int s = 0, f = 0;
//         if (prevOdd && !first) {
//             cout << v[0] << ' ';
//             f = 1;
//         }
//         while (f < n) {
//             if (f+1 < n) cout << v[f+1] << ' ';
//             v[s] = v[f];
//             s++;
//             f+=2;
//         }
//         if ((n&1 && !prevOdd) || (!(n&1) && prevOdd)) prevOdd = true;
//         else prevOdd = false;
//         n = s;
//         first = false;
//     }
//     cout << v[0] << endl;
//     return 0;
// }

void solveUsingLL() {
    ll n;
    cin >> n;
    Node *first = NULL, *prev = NULL;
    for (int i = 0; i < n; i++) {
        if (!first) {
            first = new Node(i+1);
            prev = first;
            continue;
        }
        Node* temp = new Node(i+1);
        temp->prev = prev;
        prev->next = temp;
        prev = temp;
    }
    prev->next = first;
    first->prev = prev;
    while (first->next != first) {
        cout << first->next->val << ' ';
        Node* temp = first->next;
        first->next->prev = NULL;
        first->next = first->next->next;
        temp->next = NULL;
        delete temp;
        first = first->next;
    }
    cout << first->val << endl;
}
int main() {
    solveUsingLL();
    return 0;
}