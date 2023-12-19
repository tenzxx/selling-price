Imagine you run a small business selling gadgets. You need a program that calculates the final selling price of a gadget based on its cost price (CP) and selling price (SP). If it's a profit, a 10% tax is applied on the selling price; if it's a loss, a 20% tax is applied on the selling price.

Create a program using two call-by-reference functions called profit and loss.
1. If there is a profit, the final selling price is calculated by adding the original SP and the calculated tax using the profit function.
2. If there is a loss, the final selling price is calculated by adding the original SP and the calculated tax using the loss function.
3. If there is no profit or loss, no tax amount is applied, and the selling price is printed as such without calling any function.
Input Format
The input consists of two integers: the cost price (cp) and the selling price (sp) of the gadget, separated by space.
Output Format
The output displays the final selling price of the gadget after applying the relevant tax percentage, if any. The output should be displayed in the following format:

If there is a profit: "Selling price after applying 10% tax: <<value>>"
If there is a loss: "Selling price after applying 20% tax: <<value>>"
If there is no profit or loss: "No profit or loss. Selling price: <<value>>"

Refer to the sample output for the exact format.
Constraints
1 <= cp, sp <= 105
