#include<iostream>
#include"Sales_item.h"

int main()
{
	//��д Sales_item
	/*
	//����һ��Sales_item����
	Sales_item book;	
	//����ISBN�š��۳��Ĳ����Լ����ۼ۸�
	//�������룺0-201-70353-x 4 24.99
	std::cin >> book;
	//д��ISBN�š��۳��Ĳ����������۶��ƽ���۸�
	std::cout << book << std::endl;
	*/

	//Sales_item����ļӷ�


	Sales_item item1;
	Sales_item item2;

	//0-201-78345-X 3 20.00
	//0-201-78345-X 2 25.00
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;

	return 0;
}