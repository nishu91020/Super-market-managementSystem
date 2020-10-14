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
	item it1;
	void add_item()
	{
		fstream f;
	
		f.open("items.txt",iso::out|ios::append);
		it1.product_input();
		f.write((char*)&it1,sizeof(it1));
		f.close();
		cout<<"item created successfully!!!"<<"\n";
	}
	void delete_item()
	{
		string num;
		cout<<"please enter the product code"<<"\n";
		cin>>num;
		fstream f;
		f.open("items.txt",ios::in|iso::out);
		fstream f1;
		f.open("copy.txt",ios::in|iso::out);
		fp.seekg(0,ios::beg);
		while(fp.read((char*)&produc,sizeof(product)))
		{
			if(it1.product_id!=num)
			f1.write((char*)&it1,sizeof(it1));
		}
		f.close();
		f1.close();
		remove("items.txt");
		rename("copy.txt","items.txt");
		cout<<"record with product id"<<" "<<num<<"deleted"<<"\n";
	}
	void modify_p()
	{
		string num;
		bool found=false;
		
		fstream f;
		f.open("items.txt",ios::in|iso::out);
		while(f.read((char*)&it1,sizeof(it1)) && found==false)
		{
			it1.display();
			cout<<"\nPlease Enter The New Details of Product: "<<"\n";
			it1.product_input();
			int pos=-1*sizeof(it1);
			f.seekp(pos,ios::cur);
			f.write((char*)&it1,sizeof(it1));
			cout<<" Record Successfully Updated..."<<"\n";
			found=true;
		}
		f.close();
		if(found==false)
		cout<<"record not found"<<"\n";
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
					case 3:modify_p();
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
				cout<<"1.see all the available items"<<"\n";
				cout<<"2.add an item to shopping list"<<"\n";
				cout<<"3.delete an item from shopping list"<<"\n";
				cout<<"0.exit"<<"\n";
				cin>>c_ch;
				switch(c_ch)
				{
					case 1:it1.display();
						 break;
					case 2:add_item_shop();
							break;
					case 3:delete_item_shop();
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
