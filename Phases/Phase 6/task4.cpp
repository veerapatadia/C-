#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int initialCashews = 123500; // Initial number of cashews sold in 1 month
    const double initialRevenue = 78000.0; // Initial revenue generated in 1 month

    const int months = 3; // Total number of months
    const int productionMultiplier = 10; // Production multiplier for 3 months

    // Calculate total cashews produced and total revenue for 3 months
    int totalCashews = initialCashews * productionMultiplier;
    double totalRevenue = initialRevenue * productionMultiplier;

    // Calculate the profit
    double totalCost = (totalRevenue / initialCashews) * totalCashews; // Assuming cost per cashew remains constant
    double totalProfit = totalRevenue - totalCost;

    // Calculate the percentage increase in revenue
    double increasePercentage = ((totalRevenue - (initialRevenue * months)) / (initialRevenue * months)) * 100;

    // Display the results
    cout << "Total Cashews Produced in " << months << " months: " << totalCashews << endl;
    cout << "Total Revenue Generated in " << months << " months: Rs." << fixed << setprecision(2) << totalRevenue << endl;
    cout << "Total Profit: Rs." << fixed << setprecision(2) << totalProfit << endl;
    cout << "Percentage Increase in Revenue: " << fixed << setprecision(2) << increasePercentage << "%" << endl;

    return 0;
}

