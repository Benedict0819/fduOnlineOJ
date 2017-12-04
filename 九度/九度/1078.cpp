//#include<iostream>
//#include<string.h>
//using namespace std;
//
//FILE *stream;
//int loc; // 静态数组中已经分配的结点个数
//char str1[30],str2[30];  // 保存前序中序字符串
//
//struct Node{
//	Node *lchild; // 左子树
//	Node *rchild; // 右子树
//	char c;  //结点字符信息
//} Tree[50];   // 静态分配数组
//
//Node *create(){ // 申请一个结点空间，返回其指针
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//void postOrder(Node *T){  // 后序遍历
//	if(T->lchild != NULL)
//		postOrder(T->lchild);
//	if(T->rchild != NULL)
//		postOrder(T->rchild);
//	cout<<T->c; // 遍历该节点
//}
//
//Node *build(int s1,int e1,int s2,int e2){
//	Node *ret = create();  // 为根结点申请空间
//	ret->c = str1[s1];   // 该结点字符为前序遍历的第一个字符
//	int root;
//	for(int i = s2;i<=e2;i++){ //查找根节点字符在中序遍历中的位置
//		if(str2[i]==str1[s1]){
//			root = i; break;
//		}
//	}
//	if(root!=s2)  // 左子数不为空 递归还原左子树
//		ret->lchild = build(s1+1,s1+root-s2,s2,root-1); //(rootIdx-s2)为左子树的长度
//	if(root!=e2)
//		ret->rchild = build(s1+root-s2+1,e1,root+1,e2);
//	return ret;
//}
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	while(cin>>str1>>str2){
//		loc = 0;
//		int l1 = strlen(str1);
//		int l2 = strlen(str2);
//		Node *T=build(0,l1-1,0,l2-1);
//		postOrder(T);
//		cout<<endl;
//	}
//	
//	return 0;
//}