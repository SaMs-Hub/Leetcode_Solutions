// Walk through the prices from left to right
// Keep track of the cheapest price seen so far
// At each price, pretend we sell the stock today
// Profit = today's price - cheapest price
// Keep the maximum profit found
// Buy must always happen before sell because we only use previous prices

const maxProfit = (arr) => {
  let cheapestPrice = arr[0];
  let maxProfit = 0;

  arr.slice(1).forEach((x) => {
    cheapestPrice = Math.min(x, cheapestPrice);

    const profit = x - cheapestPrice;
    maxProfit = Math.max(maxProfit, profit);
  });
  return maxProfit;
};
