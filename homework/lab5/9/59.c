#include <stdio.h>

struct Product {
    int ItemId ;
    float CostPrice ;
    float SellPrice ;
    int StockQuantity ;
} ;

float CalculateTotalProfit(float Cost, float Sell, int Qty) {
    return (Sell - Cost) * Qty ;
}

float CalculateProfitPercentage(float Cost, float Sell) {
    return ((Sell - Cost) / Cost) * 100.0 ;
}

int main() {
    struct Product Item ;
    float TotalProfit ;
    float ProfitPercent ;

    printf("Enter Item ID: ") ;
    
    if (scanf("%d", &Item.ItemId) != 1) {
        
        scanf("%*c%d", &Item.ItemId) ; 
    }

    printf("Enter Cost Price per unit: ") ;
    scanf("%f", &Item.CostPrice) ;

    printf("Enter Sell Price per unit: ") ;
    scanf("%f", &Item.SellPrice) ;

    printf("Enter Stock Quantity: ") ;
    scanf("%d", &Item.StockQuantity) ;

    TotalProfit = CalculateTotalProfit(Item.CostPrice, Item.SellPrice, Item.StockQuantity) ;
    ProfitPercent = CalculateProfitPercentage(Item.CostPrice, Item.SellPrice) ;

    printf("\n--- INVENTORY PROFIT REPORT ---\n") ;
    printf("Item ID: %d\n", Item.ItemId) ;
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", Item.CostPrice, Item.SellPrice, Item.StockQuantity) ;
    printf("Total Profit: %.2f\n", TotalProfit) ;
    printf("Profit Percentage: %.2f%%\n", ProfitPercent) ;

    if (TotalProfit > 0) {
        printf("Status: Profit!\n") ;
    } else if (TotalProfit < 0) {
        printf("Status: Loss!\n") ;
    } else {
        printf("Status: Break Even.\n") ;
    }

    return 0 ;
}