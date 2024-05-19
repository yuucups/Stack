#include <iostream>
#include <stack>

using namespace std;

int main (){
	stack<string> film;
	
	film.push("Maze Runner");
	film.push("Murder Mystery");
	film.push("Knives Out");
	
	cout << "Isi stack :\n";
	stack<string>tempStack = film; 
	
	while (!tempStack.empty()){
		cout << tempStack.top() << endl;
		tempStack.pop();
 	}
 	cout << endl;
 	
 	if(!film.empty()){
 		cout << "data yang akan dihapus: " << film.top() << endl;
	 }else {
	 	cout << "Stack sudah kosong" << endl;
	 	return 0;
	 }
	 
	 film.pop();
	 
	 cout << "\nIsi stack setelah penghapusan:\n";
	 while (!film.empty()){
	 	cout << film.top()<<endl;
	 	film.pop();
	 }
}
