#include <iostream>

int net(double gross)
{
	double netPay;
	netPay = gross * 0.68;
	return netPay;
}
int gross(double h)
{
	double gross;
	double pay = 8.0;
	gross = h * pay;
	return gross;
}
int main()
{

	double grossPay, total, hours;

	std::cout << "Cartwright Industries payroll calculator" << std::endl;

	std::cout << "How many hours were worked this week? ";
	std::cin >> hours;

	grossPay = gross(hours);
	total = net(grossPay);
	
	std::cout << "Net pay for the week is " << total << std::endl;

}