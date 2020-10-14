//this is a program for generating bills using file handling.
#include<bits/stdc++.h>
using namespace std;
class item{
	string product_id;
	string product_name;
	float price,discount_percentage;
	void product_input()
	{
		cout<<"enter product id"<<"\n";
		cin>>product_id;
		cout<<"enter product name"<<"\n";
		cin>>product_name;
		cout<<"enter price of product"<<"\n";
		cin>>price;
		cout<<"enter discount"<<"\n";
		cin>>discount_percentage;
		}
	void display()
	{
		cout<<" product id is"<<" "<<product_id<<"\n";
		cout<<" product name is"<<" "<<product_name<<"\n";
		cout<<" price of product is"<<" "<<price<<"\n";
		cout<<" discount is"<<" "<<discount_percentage<<"\n";
	}
	string get_product_id(){
		return product_id;
		
	}
	string get_product_name(){
		return product_id;
		
	}
	float get_price(){
		return product_id;
		
	}
	float get_product_id(){
		return product_id;
		
	}
	
};
	void add_item()
	{
		fstream f;
		item it1;
		f.open("items.txt",iso::out|ios::append);
		it1.product_input();
		f.write((char*)&it1,sizeof(it1));
		f.close();
		cout<<"item created successfully!!!"<<"\n";
	}
	void delete_item()
	{
		fstream f;
		f.open("items.txt",ios::in|iso::out);
		f.close();
	}
	void clear_all()
	{
		fstream f;
		f.open("items.txt",ios::in|iso::out);
		f.close();
	}
int main()
{
	while(ans==1)
	{
		string ch;
		cout<<"you are a vendor or customer"<<"\n";
		cin>>ch;
		if(ch=="vendor")
		{
			do{	int k;
				int v_ch;
				cout<<"1.add an item to the list"<<"\n";
				cout<<"2.delete an ite from stock"<<"\n";
				cout<<"3.clear all data"<<"\n";
				cout<<"0.exit"<<"\n";
				cin>>v_ch;
				switch(v_ch)
				{
					case 1:add_item();
							break;
					case 2:delete_item();
							break;
					case 3:clear_all();
							break;
					default:cout<<"invalid choice"<<"\n";
							break; 
				}
				cout<<"want to perform one more operation?"<<"\n";
				cin>>k;
			}while(k!=0);
		}
		if(ch=="customer")
		{
			do{
				int k;
				int c_ch;
				cout<<"1.add an item to shopping list"<<"\n";
				cout<<"2.delete an item from shopping list"<<"\n";
				cout<<"0.exit"<<"\n";
				cin>>c_ch;
				switch(c_ch)
				{
					case 1:add_item_shop();
							break;
					case 2:delete_item_shop();
							break;
					default:cout<<"invalid choice"<<"\n";
							break; 
				}
				cout<<"want to perform one more operation?"<<"\n";
				cin>>k;
			}while(k!=0);
		}
		cout<<"once more?"<<"\n";
		cin>>ans;
	}	
	return 0;
}
