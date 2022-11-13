#include<iostream>
#include<map>


using namespace std;

int main() {
	string author("Albert Camus"), workName1("Outside"), workName2("La Peste");
	multimap<string, string> m;
	m.insert({ author, workName1 });
	m.insert({ author, workName2 });
	m.insert({ "Norbert Wiener" , "Cybernetics" });
	m.find(author);
	//int i = m.erase("author");
	//cout << i << endl;
	auto formal_mit = m.begin();
	for (auto mit = m.begin(); mit != m.end();++mit)
	{
		(mit == m.begin() || mit->first != formal_mit->first) ? 
		cout << "\n" << mit->first << ":\n" << mit->second :  cout << " , " << mit->second;
		formal_mit = mit;

	}

}