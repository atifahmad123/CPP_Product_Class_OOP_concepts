#include <iostream>
using namespace std;

class Product{
	private:
		const int productID;
		const double price;
		
	public:
//		Product()
//		{
//			productID= 0;
//			price= 00;
//		}
		Product(int ID, double product_Price): productID(ID), price(product_Price){}
		const void displayProduct()
		{
			cout<<"product id is= "<<productID<<endl;
			cout<<"product price is= "<<price<<endl;
		}
};
int main()
{
	Product P1(1524, 12.043);
	P1.displayProduct();
	
	Product P2(265, 145.24);
	P2.displayProduct();
	
}
