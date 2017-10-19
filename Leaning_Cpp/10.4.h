#pragma once
#include <iostream>

namespace SALES 
{
	const int QUARTERS = 4;
	class Sales
	{
	public:
		Sales(const double arr[],int n);
		Sales(const Sales &x);
		~Sales();
		void showSales() const;

	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
}