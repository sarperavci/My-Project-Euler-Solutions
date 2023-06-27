#include <iostream>
using namespace std;


int sum_of_multiples(int x){
    int n_three= (int)(x/3);
    int n_five= (int)(x/5);
    int n_commons= (int)(x/15);
    if (x%3==0){n_three-=1;}
    if (x%5==0){n_five-=1;}
    if (x%15==0){n_commons-=1;}

    return 3*(n_three*(n_three+1))/2 + 5*(n_five*(n_five+1))/2  -  15*(n_commons*(n_commons+1))/2 ;
}

/*
This function defines a function called `sum_of_multiples` that takes an integer `x` as input and calculates the sum of all the multiples of 3 and 5 up to the given input value `x`.

The function first calculates the number of multiples of 3 (`n_three`), the number of multiples of 5 (`n_five`), and the number of multiples of both 3 and 5 (`n_commons`) within the range up to `x`. These calculations are done by dividing `x` by 3, 5, and 15 respectively, and casting the result to the `int` data type to ensure integer division.

Next, the function checks if `x` is divisible by 3, 5, or 15 (common multiple of 3 and 5), and if so, it subtracts 1 from the corresponding count variable (`n_three`, `n_five`, `n_commons`). This adjustment is made to avoid counting `x` itself as a multiple in the final sum.

Finally, the function computes the sum of the multiples using the formula for the sum of an arithmetic series. It multiplies the count of multiples of 3 (`n_three`) by 3, the count of multiples of 5 (`n_five`) by 5, and the count of multiples of 15 (`n_commons`) by 15. Then it applies the formula `(n * (n + 1)) / 2` to each term to calculate the sum of the arithmetic series. The sum of the multiples of 3 and 5 is computed separately, and then the sum of the multiples of 15 (to avoid double-counting) is subtracted from the result.

Finally, the calculated sum is returned as the output of the function.
*/

int main(){
    int number=100;
//  cin >> number;
    cout << sum_of_multiples(number);
    return 0;
}
