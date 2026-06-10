#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int n = 7;
    int key = 100;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element found" << endl;
            return 0;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << "Element not found" << endl;
}
/*
BINARY TREE
 ---oru tree structure
 --oru node ku max 2 children than irrukanum
      left and right
--left side values root vida small ahh irukanum
--right side values root vida perusa ahh irrukanum
--intha rulke la subtree kum apply agum
//////root=top node
      parent=na mela irrukra node
      child=na kizha irruka node
      leaf node =children illatha node
---TRAVERSAL 
//////preorder(root->left->right)
      inorder(left->root->right)
      postorder(left->right->root)
OPERATION
-----searching
     insert
     delete
----height na n-1
TYPES OF BINARY TREE
-----FULL BINARY TREE
     ->0 child irrukanum 
     ->illana 2 children irrukanum
-----COMPLETE BINARY TREE
     ->level by level fill aganum
     ->last level la mattum konjam empty irrukalam
     ->ana left to right irrunthu fill aganum
-----PERFECT BINARY TREE
     ->ella levels um full ahh irrukanum
     ->all leaf nodes um same level la irrukanum
     ->oru gap kuda irruka kudathu
-----BALANCED BINARY TREE
     ->tree left side layum right side layum almost same height la irrukanum
-----DEGENERATE BINARY TREE
     ->linked kist mathiri agidum
     ->ithu binary tree than
     ->ana performance worst
-----AVL TREE
     balance factor=height(left)-height(right)
     possible values
       --(-1)
       --(0)
       --(+1)
    example
         10
         /
        5
    left height=1
    right  height=0
    BF=1-0=+1
-----TREE IMBALANCE ANA ROTATE PANANUM ANTHA TYPES
     ->LL ROTATION=right la rotaion agum
     ->RR ROTATION=left la rotation agirum
     ->LR ROTATION=left+right rotate agum
     ->RL ROTATION=right+left rotate agym
-----HEAP TREE
     ->MAX heap
       //parent eppayume children vida perusa irrukanum
       //parent>child
     ->MIN heap
      //parent eppayume children vida chinnatha irrukanum
      //parent<child
   --heap using in priority basis
      ->task1 priority=100
      ->task2 priority=80
      ->task3 priority=50
      highest priority task than 1st execute seiyum
-----PRIORITY QUEUE
        normal queue=1st in 1st out
        priority queue=highest priority 1st out
-----RED BLACK TREE
     konjam flexible ahh irrukum avl tree vida
     ovvoru node kum red black nu color irukum
     root always black
     two red nodes continue ahh irruka kudathu
-----B TREE
     one node=multiple values
     normal database la millions of record irrukum
     hard disk la read/write costly
     athanala oru node la neray values store panalam
*/