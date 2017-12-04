//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//struct Student{
//	string num;
//	string name;
//	string sex;
//	int age;
//};
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int n;
//	while(cin>>n){
//		vector<Student> stu(n);
//		for(int i = 0;i<n;i++)
//			cin>>stu[i].num>>stu[i].name>>stu[i].sex>>stu[i].age;
//		int m,flag,mark= -1 ;
//		cin>>m;
//		string a;
//		for(int i = 0;i<m;i++){
//			cin>>a;
//			flag = 0;
//			for(int j = 0;j<n;j++){
//				if(stu[j].num == a){
//					flag = 1;mark = j;
//				}
//			}
//			if(flag) cout<<stu[mark].num<<" "<<stu[mark].name<<" "<<stu[mark].sex<<" "<<stu[mark].age<<endl;
//			else cout<<"No Answer!"<<endl;
//
//		}
//	}
//
//	return 0;
//}