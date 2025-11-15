// Algorithm Challenge
// 34 Program to calculate commission percentage based on total sales

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float totalSales;

    // Ask the user to enter the total sales amount
    cout << "Please enter your total sales:\n";
    cin >> totalSales;

  
    // Determine commission percentage based on sales ranges
    if (totalSales >= 1000000)
    {
        float percentage = 0.01; // 1%
        float totalCommission = percentage * totalSales;
        cout << "Sales above 1M — Commission: " << totalCommission;
    }
    else if (totalSales >= 500000)
    {
        float percentage = 0.02; // 2%
        float totalCommission = percentage * totalSales;
        cout << "Sales above 500K — Commission: " << totalCommission;
    }
    else if (totalSales >= 100000)
    {
        float percentage = 0.03; // 3%
        float totalCommission = percentage * totalSales;
        cout << "Sales above 100K — Commission: " << totalCommission;
    }
    else if (totalSales >= 50000)
    {
        float percentage = 0.04; // 4%
        float totalCommission = percentage * totalSales;
        cout << "Sales above 50K — Commission: " << totalCommission;
    }
    else if (totalSales >= 10000)
    {
        float percentage = 0.05; // 5%
        float totalCommission = percentage * totalSales;
        cout << "Sales above 10K — Commission: " << totalCommission;
    }
    else
    {
        float percentage = 0; // No commission
        cout << "Sales below 10K — No commission: " << percentage;
    }

    return 0;
}
