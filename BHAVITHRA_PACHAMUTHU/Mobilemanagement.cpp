#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
class Mobile {
public:
    int mobileId;
    string modelName;
    string mobileBrand;
    long long mobilePrice;
    int mobileStock;
    Mobile *left,*right;
    Mobile(int id,string model,string brand,long long price,int stock) {
        mobileId=id;
        modelName=model;
        mobileBrand=brand;
        mobilePrice=price;
        mobileStock=stock;
        left=right=NULL;
    }
};
class MobileManagement {
public:
    Mobile*root;
    bool found;
    MobileManagement() {
        root=NULL;
    }
    void insertMobile(Mobile* newMobile) {
    if(root==NULL) {
        root=newMobile;
        return;
    }
    Mobile*temp=root;
    while(temp!=NULL) {
        if(newMobile->mobileId<temp->mobileId) {
            if(temp->left==NULL) {
                temp->left=newMobile;
                return;
            }
            temp=temp->left;
        }
        else if(newMobile->mobileId>temp->mobileId) {
            if(temp->right==NULL) {
                temp->right=newMobile;
                return;
            }
            temp=temp->right;
        }
        else {
            cout<<"Mobile ID already exists"<< endl;
            return;
        }
    }
} 
    int nodeCount(Mobile*root){
        if(root==NULL){
        return 0;
        }
        else{
            return 1+nodeCount(root->left)+nodeCount(root->right);
        }
    }
    int height(Mobile*root){
        if(root==NULL){
        return 0;
        }
        else{
            return 1+ max(height(root->left),height(root->right));
        }
    }
    void addAutomaticMobiles() {
        int count;
        auto start=high_resolution_clock::now();
        cout << "How many mobiles do you want to add? ";
        cin >> count;
        string brands[] = {"Samsung", "Vivo", "Oppo", "Realme"};
        string models[4][2] = {
            {"Galaxy M14", "Galaxy A15"},
            {"Vivo Y21", "Vivo V29"},
            {"Oppo A78", "Oppo Reno 10"},
            {"Realme C55", "Realme Narzo 60"}
        };
        long long prices[4][2] = {
           {14000, 18000},// Samsung
           {13000, 32000},// Vivo
           {16000, 75000},// Oppo
           {12000, 50000}// Realme
        };
       int stocks[4][2] = {
           {10, 15},   
           {12, 8},    
           {20, 6},    
           {18, 9}     
        };
        vector<int> ids;
        for(int i=1;i<=count;i++) 
        {
            ids.push_back(i);
        }
        random_device rd;
        mt19937 generator(rd());
        shuffle(ids.begin(), ids.end(), generator);
        for(int i=0;i<count;i++){
            int id=ids[i];
            int brandIndex=i%4;
            int modelIndex=(i/4)%2;
            string brand=brands[brandIndex];
            // string model=models[brandIndex][modelIndex];
            string prefixes[]={"Alpha","Beta","Prime","Pro","Ultra","Max","Little","Ultrapromax"};
            string model=brand+" "+prefixes[id%8]+" "+to_string(id);
            long long price=prices[brandIndex][modelIndex];
            int stock=stocks[brandIndex][modelIndex];
            Mobile*newMobile = new Mobile(id,model,brand,price,stock);
            root=insertMobile(root,newMobile);
        }
        auto end=high_resolution_clock::now();
        auto seconds=duration<double>(end-start);
        cout<<count<<" Mobiles added "<<endl;
        cout<<"Insert Time: "<<seconds.count()<<" s"<<endl;
        cout<<count<<" mobiles added automatically"<<endl;
    }
    void displayMobile(Mobile*temp) {
        cout << "ID: "<<temp->mobileId<< " | Model: "<<temp->modelName<< " | Brand: "<< temp->mobileBrand<< " | Price: " <<temp->mobilePrice<< " | Stock: "<< temp->mobileStock<<endl;
    }
   void searchByModel() {
    string model;
    bool found = false;
    cout << "Enter Model Name to search: ";
    cin.ignore();
    getline(cin, model);
    queue<Mobile*> q;
    if(root != NULL) {
        q.push(root);
    }

    while(!q.empty()) {
        Mobile* temp = q.front();
        q.pop();
        if(temp->modelName == model) {
            cout << "Mobile Found in Inventory:" << endl;
            displayMobile(temp);
            found = true;
        }
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    if(found == false) {
        string upcomingModels[] = {"iPhone 16", "Samsung S25", "Vivo V40"};
        string oldModels[] = {"Nokia 1100", "Samsung J2", "Vivo Y12"};
        for(int i = 0; i < 3; i++) {
            if(model == upcomingModels[i]) {
                cout << "This is an upcoming model. It will arrive soon." << endl;
                found = true;
            }

            if(model == oldModels[i]) {
                cout << "This is an old model. We stopped selling it." << endl;
                found = true;
            }
        }
    }
    if(found == false) {
        cout << "Model not found." << endl;
    }
}
    void displayBelow50000(Mobile* root) {
        if (root==NULL) {
            return;
        }
        displayBelow50000(root->left);
        if (root->mobilePrice < 50000) {
            displayMobile(root);
        }
        displayBelow50000(root->right);
    }
    void displayAbove50000(Mobile* root) {
        if(root==NULL) {
            return;
        }
        displayAbove50000(root->left);
        if(root->mobilePrice >= 50000) {
            displayMobile(root);
        }
        displayAbove50000(root->right);
    }
    void displayPriceGrouping() {
        auto start=high_resolution_clock::now();
        cout << "===== Mobiles Below 50000 ====="<<endl;
        displayBelow50000(root);
        cout << "===== Mobiles 50000 and Above ====="<<endl;
        displayAbove50000(root);
        auto end=high_resolution_clock::now();
        auto milli=duration_cast<milliseconds>(end-start);
        auto seconds=duration<double>(end-start);
        cout<<"Grouping Time: "<<milli.count()<<" milliseconds"<<endl;
        cout<<"Grouping Time: "<<seconds.count()<<" s"<<endl;
        }
    void Inorder(Mobile* root) {
        if(root==NULL) {
            return;
        }
        Inorder(root->left);
        displayMobile(root);
        Inorder(root->right);
    }
    void displayInorderTime() {
    auto start = high_resolution_clock::now();
    Inorder(root);
    auto end = high_resolution_clock::now();
    auto milli=duration_cast<milliseconds>(end - start);
    auto seconds=duration<double>(end-start);
    cout << "Inorder Time: " << milli.count() << " milliseconds" << endl;
    cout << "Inorder Time: " << seconds.count()<< " s" << endl;
    }
    void preorder(Mobile*root) 
    {
    if(root==NULL) {
        return;
    }
    displayMobile(root);
    preorder(root->left);
    preorder(root->right);
}
    void postorder(Mobile*root) 
{
    if(root==NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    displayMobile(root);
}
Mobile* findMin(Mobile* root) {
    while(root->left != NULL) {
        root = root->left;
    }
    return root;
}
Mobile* deleteMobile(Mobile* root, int id) {
    if(root==NULL) {
        cout << "Mobile ID not found." << endl;
        return NULL;
    }
    if(id<root->mobileId) {
        root->left=deleteMobile(root->left, id);
    }
    else if(id>root->mobileId) {
        root->right=deleteMobile(root->right, id);
    }
    else {
        if(root->left==NULL&&root->right==NULL) {
            delete root;
            return NULL;
        }
        else if(root->left==NULL) {
            Mobile* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL) {
            Mobile* temp=root->left;
            delete root;
            return temp;
        }
        else {
            Mobile* temp=findMin(root->right);
            root->mobileId=temp->mobileId;
            root->modelName=temp->modelName;
            root->mobileBrand=temp->mobileBrand;
            root->mobilePrice=temp->mobilePrice;
            root->mobileStock=temp->mobileStock;
            root->right=deleteMobile(root->right, temp->mobileId);
        }
    }
    return root;
}
void deletebyId(){
    int id;
    int choice;
    cout<<"Enter mobile number to Delete: ";
    cin>>id;
    cout<<"---Select Delete Reason---"<<endl;
    cout<<"1. Stock 0"<<endl;
    cout<<"2. Old model stopped"<<endl;
    cout<<"3. Damaged product"<<endl;
    cout<<"Enter your chioce: ";
    cin>>choice;
    if(choice==1)
    cout<<"Stock 0"<<endl;
    else if(choice==2)
    cout<<"Old model stoppes";
    else if(choice==3)
    cout<<"Damaged product";
    else 
    cout<<"Other ";
    root=deleteMobile(root,id);
    cout<<"Mobile deleted successfully"<<endl;
}
};
int main() {
    MobileManagement m;
    int choice;
    do {
        cout << "===== Mobile Store Management ====="<<endl;
        cout << "1. Add Mobiles Automatically"<<endl;
        cout << "2. Display All Mobiles Sorted by ID"<<endl;
        cout << "3. Preorder"<<endl;
        cout << "4. Postorder"<<endl;
        cout << "5. Search Mobile by Model Name"<<endl;
        cout << "6. Display Price Grouping"<<endl;
        cout << "7. Delete Mobile by Id"<<endl;
        cout << "8. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) 
        {
        case 1:
            m.addAutomaticMobiles();
            break;
        case 2:
            cout << "\n===== All Mobiles Sorted by ID =====\n";
            m.displayInorderTime();
            break;
        case 3:
            m.preorder(m.root);
            break;
        case 4:
            m.postorder(m.root);
            break;
        case 5:
            m.searchByModel();
            break;
        case 6:
            m.displayPriceGrouping();
            break;
        case 7:
            m.deletebyId();
            break;
        case 8:
            cout << "Program exited.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice!=8);
    return 0;
}
