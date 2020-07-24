#include<iostream>
#include"Sales_item.h"

int main()
{
	//读写 Sales_item
	/*
	//创建一个Sales_item对象
	Sales_item book;	
	//读入ISBN号、售出的册数以及销售价格
	//键盘输入：0-201-70353-x 4 24.99
	std::cin >> book;
	//写入ISBN号、售出的册数、总销售额和平均价格
	std::cout << book << std::endl;
	*/

	//Sales_item对象的加法


	Sales_item item1;
	Sales_item item2;

	//0-201-78345-X 3 20.00
	//0-201-78345-X 2 25.00
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;

	return 0;
}