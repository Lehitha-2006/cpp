#include<bits/stdc++.h>
using namespace std;

class Book{
	public:
		int id;
		string title;
		string author;
		int avaliableCopies;
		Book(int id,string title,string author,int avaliableCopies){
			this->id=id;
			this->title=title;
			this->author=author;
			this->avaliableCopies = avaliableCopies;
		}
		void DisplayBook(){
			//is to print the info of the book
			//the id of book :
			//the author of book
		}
};
class Member{
	public:
		int id;
		string name;
		int phoneNumber;
		vector<int>InfoBook;
		
		Member(int id,string name,int phoneNumber){    //Constructor
		       this->id = id;
		       this->name = name;
		       this->phoneNumber = phoneNumber;
	    }
	    void borrowBook(int bookId){
	    	InfoBook.push_back(bookId);
		}
		void returnBook(int bookId){
			//InfoBook.erase(InfoBook.begin(),InfoBook.end(),bookId);
		}
				
};
class Library{
	public:
		vector<Book>books; //100
		vector<Member>members;
		
		void addBook(Book b){
			books.push_back(b);
		}
		void addMember(Member m){
			members.push_back(m);
		}
		
		void borrowBook(int memberId,int bookId){
			bool f=0;
			for(auto &b:books){
				if(b.id==bookId && b.avaliableCopies>0){
					for(auto &m : members){
						if(m.id==memberId){
							m.borrowBook(bookId);
							b.avaliableCopies--;
							f=1;
							cout<<m.name<<"borrowed"<<b.title<<endl;
						}
					}
				}
			}
			if(f==0) cout<<"Book is not avaliable\n";
		}
	void returnBook(int memberId,int bookId){
		for(auto &b:books){
			if(b.id==bookId){
				for(auto &m : members){
					if(m.id==memberId){
						m.returnBook(bookId);
						b.avaliableCopies++;
						cout<<m.name<<"returned"<<b.title<<endl;
						return;
						
					}
				}
				
			}
		}
	cout<<"Invalid return"<<endl;	
	}
};

int main(){
	Library lib;
	Book b1(1,"c++","Ashok",3);
	lib.addBook(b1);
	Member m1(2,Gowri,9133810933);
	
}



















