#include<iostream>
#include<vector>
using namespace std;
struct Node{
	int data;
	Node*left,*right;
	Node(int val):data(val),left(nullptr),right(nullptr){}
};
Node*insert(Node*root,int val){
	if(!root)return new Node(val);
	if(val<root->data)root->left=insert(root->left,val);
	else if(val>root->data)root->right=insert(root->right,val);
	return root;
}
Node*search(Node*root,int key){
	if(!root||root->data==key)
	return root;
	return(key<root->data)?search(root->left,key):search(root->right,key);
	
}
Node*findmin(Node*root){
	while(root&&root->left)root=root->left;
	return root;
}
Node*deleteNode(Node*root,int key){
	if(!root)return root;
	if(key<root->data)root->left=deleteNode(root->left,key);
	else if(key>root->data)root->right=deleteNode(root->right,key);
	else{
		if(!root->left){Node*temp=root->right;delete root;return temp;}
		else if(!root->right){
			Node*temp=root->left;delete root;return temp;
		}
		Node*temp=findmin(root->right);
		root->data=temp->data;
		root->right=deleteNode(root->right, temp->data);
	}
	return root;
}
//transversals
void inorder(Node*root){
	if(!root)return;
	inorder(root->left);
	std::cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(Node*root){
	if (!root)return;
	postorder(root->left);
	postorder(root->right);
	std::cout<<root->data<<" ";
}
void preorder(Node*root){
	if(!root)return;
	std::cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
//merging two BSTs
void storeinorder(Node*node,std::vector<int>&vec){
	if(!node)return;
	storeinorder(node->left,vec);
	vec.push_back(node->data);
	storeinorder(node->right,vec);
}
Node*sortedArrayToBST(const std::vector<int>&arr,int start,int end){
	if(start>end)return nullptr;
	int mid=start+(end-start)/2;
	Node*node=new Node(arr[mid]);
	node->left=sortedArrayToBST(arr,start,mid-1);
	node->right=sortedArrayToBST(arr,mid+1,end);
	return node;
}
Node*mergeTrees(Node*root1,Node*root2){
	std::vector<int>v1,v2,merged;
	storeinorder(root1,v1);
	storeinorder(root2,v2);
//merge two sorted vectors
int i=0,j=0;
while(i<v1.size()&&j<v2.size())
(v1[i]<v2[j])?merged.push_back(v1[i++]):merged.push_back(v2[j++]);
while(i<v1.size())
merged.push_back(v1[i++]);
while(j<v2.size())
merged.push_back(v2[j++]);
return sortedArrayToBST(merged,0,merged.size()-1);
	
}
int main(){
	Node*root=nullptr;
	int keys[]={50,30,20,40,70,60,80};
	for(int k:keys)root=insert(root,k);
	std::cout<<"inorder: ";
	inorder(root);std::cout<<std::endl;
	std::cout<<"searching for 40: "<<(search(root,40)?"found":"not found")<<std::endl;
	root=deleteNode(root,20);
	std::cout<<"after deleting 20,inorder:";inorder(root);std::cout<<std::endl;
	
	
	return 0;
}
