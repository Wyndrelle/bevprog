#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main(void)
{
	try
	{
		cout<<"1. Success!\n"; 
		cout<<"2. Success!\n"; 
		cout<<"3. Success"<<"!\n"; 
		cout<<"4. Success!"<<'\n'; 
    
		int res=7;
    vector<int> v(10);
    v[5] = res; cout << "5. Success!\n"; 
		vector<int> v2(10); 
    v2[5] = 7;
    
    if (v2[5]!=7){} cout << "6. Success!\n";
    
		if (true) cout << "7. Success!\n"; else cout << "Fail!\n"; 
    
		bool c = true; if (c) cout << "8. Success!\n"; else cout << "Fail!\n"; 
		string s = "ape";
    string c1 = "fool";
    if (true) cout << "9. Success!\n";
		string s1 = "ape";
    if (s1!="fool") cout << "10. Success!\n";
	  string s2 = "ape";
    if (s2=="fool"){} cout << "11. Success!\n"; 
		string s3 = "ape";
    if (s3!="fool") cout << "12. Success!\n";
		vector<char> v3(5);
    for (int i=0; i<v3.size(); ++i){}  cout << "13. Success!\n";
		vector<char> v4(5);
    for (int i=0; i<=v.size(); ++i){} cout << "14. Success!\n"; 
		string s4 = "15. Success!\n";
    for (int i=0; i<6; ++i){} cout << s4;
		if (true) cout << "16. Success!\n";
    else cout << "Fail!\n"; 
		int x = 2000;
    int c2 = x;
    if (c2==2000) cout << "17. Success!\n"; 
		/string s5 = "18. Success!\n";
    for (int i=0; i<10; ++i){} cout << s5; 
		vector<int> v5(5);
    for (int i=0; i<=v.size(); ++i){} cout << "19. Success!\n"; 
		int i=0; int j = 9; while (i<10) ++i; if (j<=i) cout << "20. Success!\n";
		int x1 = 2; double d = 5/(x1-1); if (d==2*x1+1) cout << "21. Success!\n"; 
		string s6 = "22. Success!\n"; for (int i=0; i<=14; ++i) cout << s6[i]; 
		int i1=2; int j1=0; while (j1<10){ ++j1; if (j1<i1) cout << "23. Success!\n";}
		int x2 = 4; double d1 = 5/(x2-2); if (d1=2*x2-0.5) cout << "24. Success!\n";
		cout << "25. Success!\n"; 

	}
	catch (exception& e)
	{
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
}
