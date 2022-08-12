#include <iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

class Unit {
public:
	Unit() {}
	Unit(string name, string type, int size) {
		name_ = name;
		type_ = type;
		size_ = size;
	}
	void set_name(string name) {
		name_ = name;
	}
	string get_name() {
		return name_;
	}
	void set_type(string type) {
		type_ = type;
	}
	string get_type() {
		return type_;
	}
	void set_size(int size) {
		size_ = size;
	}
	int get_size() {
		return size_;
	}
	void show() {
		cout << name_<<" "<<type_ <<" " << size_ << endl;
	}
private:
	string name_;
	string type_;
	int size_;

};




int main() {
	system("chcp 1251>null");
	Unit unit("иван", "воин", 13);
	Unit unit1("света", "орк", 41); 
	Unit unit2("оля", "друид", 30);
	/***********************************/
	Unit unit3("оля", "друид", 30);
	Unit unit4("света", "орк", 41);
	Unit unit5("наташа", "гном", 11);
	/*************************************/

	cout<< "коллекция 1:\n";
	set<Unit*>collection_unit_1;
	collection_unit_1.emplace(new Unit(unit));
	collection_unit_1.emplace(new Unit(unit1));
	collection_unit_1.emplace(new Unit(unit2));
	set<Unit*>::iterator it;
	for (it = collection_unit_1.begin(); it != collection_unit_1.end(); it++) {
		(*it)->show();
	}

	cout << endl<<"коллекция 2:\n";
	set<Unit*>collection_unit_2;
	collection_unit_2.emplace(new Unit(unit3));
	collection_unit_2.emplace(new Unit(unit4));
	collection_unit_2.emplace(new Unit(unit5));
	for (it = collection_unit_2.begin(); it != collection_unit_2.end(); it++) {
		(*it)->show();
	}
	set<Unit*>::iterator i;
	set<Unit*>::iterator j;
	for (i = collection_unit_2.begin(); i != collection_unit_2.end(); i++)
	for (j = collection_unit_1.begin(); j != collection_unit_1.end(); j++)
	if (((*i)->get_name()) == ((*j)->get_name())) 
	cout << "есть совпадение по имени:" << ((*i)->get_name()) <<endl;

	for (i = collection_unit_2.begin(); i != collection_unit_2.end(); i++)
	for (j = collection_unit_1.begin(); j != collection_unit_1.end(); j++)
	if (((*i)->get_size()) == ((*j)->get_size())) 
	cout << "есть совпадение по размеру:" << ((*i)->get_size()) << endl;

	for (i = collection_unit_2.begin(); i != collection_unit_2.end(); i++)
	for (j = collection_unit_1.begin(); j != collection_unit_1.end(); j++)
	if (((*i)->get_type()) == ((*j)->get_type()))
	cout << "есть совпадение по фракции:" << ((*i)->get_type()) <<endl;

	for (i = collection_unit_2.begin(); i != collection_unit_2.end(); i++)
	for (j = collection_unit_1.begin(); j != collection_unit_1.end(); j++)
	if (((*i)->get_name()) == ((*j)->get_name()) && ((*i)->get_size()) == ((*j)->get_size()) && ((*i)->get_type()) == ((*j)->get_type()))
	cout << "Есть полное совподение юнита: "<< ((*i)->get_name())<<" " << ((*i)->get_type())<<" "<< ((*i)->get_size())<< endl;
	

	

			

		
	
	
		
	


	system("pause>nul");
	return 0;
}