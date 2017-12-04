//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//string a[3];
//long long int tag, radix;
//long long int num;
//
//int maxNum(string s){   // 找出每个num中的最大数 作为下届
//	int d = -1;
//	for (int i = 0; i < s.size(); i++){
//		int num;
//		if (s[i] >= '0'&&s[i] <= '9') num = s[i] - '0';
//		else num = s[i] - 'a' + 10;
//
//		if (num > d) d = num;
//	}
//	return d + 1;
//}
//
//long long int tolongint(string s, long long int dig){
//	long long int ans = 0;
//	long long int d = 1;
//	for (int i = s.size() - 1; i >= 0; i--){
//		int n;
//		if (s[i] >= '0' && s[i] <= '9')
//			n = s[i] - '0';
//		else
//			n = s[i] - 'a' + 10;
//		ans += n*d;
//		d *= dig;
//	}
//	return ans;
//}
//
//int cmp(string s, long long int dig){   
//	long long int ans = 0;
//	long long int d = 1;
//	for (int i = s.size() - 1; i >= 0; i--)
//	{
//		int n;
//		if (s[i] >= '0' && s[i] <= '9') n = s[i] - '0';
//		else n = s[i] - 'a' + 10;
//
//		ans = ans + n*d;
//		if (ans>num) return 1;
//		d *= dig;
//	}
//	if (ans == num) return 0;
//	return -1;
//}
//
//long long int radixSearch(){    // 找最小基数
//	int cur = (tag == 1) ? 2 : 1;
//	long long int l = maxNum(a[cur]);
//	long long int r = max(l, num);
//	long long int m;
//	while (l <= r){
//		m = (l + r) / 2;
//		int res = cmp(a[cur], m);
//		if (res == 0) return m;
//		else if (res == 1) r = m - 1;
//		else l = m + 1;
//	}
//	return 0;
//
//}
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> a[1] >> a[2] >> tag >> radix){
//		if (a[1] == a[2]){
//			cout << radix << endl;
//			continue;
//		}
//		num = tolongint(a[tag], radix);
//
//		long long int ans = radixSearch();
//
//		if (ans == 0) cout << "Impossible" << endl;
//		else cout << ans << endl;
//	}
//	return 0;
//}
//
