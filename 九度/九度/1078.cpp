//#include<iostream>
//#include<string.h>
//using namespace std;
//
//FILE *stream;
//int loc; // ��̬�������Ѿ�����Ľ�����
//char str1[30],str2[30];  // ����ǰ�������ַ���
//
//struct Node{
//	Node *lchild; // ������
//	Node *rchild; // ������
//	char c;  //����ַ���Ϣ
//} Tree[50];   // ��̬��������
//
//Node *create(){ // ����һ�����ռ䣬������ָ��
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//void postOrder(Node *T){  // �������
//	if(T->lchild != NULL)
//		postOrder(T->lchild);
//	if(T->rchild != NULL)
//		postOrder(T->rchild);
//	cout<<T->c; // �����ýڵ�
//}
//
//Node *build(int s1,int e1,int s2,int e2){
//	Node *ret = create();  // Ϊ���������ռ�
//	ret->c = str1[s1];   // �ý���ַ�Ϊǰ������ĵ�һ���ַ�
//	int root;
//	for(int i = s2;i<=e2;i++){ //���Ҹ��ڵ��ַ�����������е�λ��
//		if(str2[i]==str1[s1]){
//			root = i; break;
//		}
//	}
//	if(root!=s2)  // ��������Ϊ�� �ݹ黹ԭ������
//		ret->lchild = build(s1+1,s1+root-s2,s2,root-1); //(rootIdx-s2)Ϊ�������ĳ���
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