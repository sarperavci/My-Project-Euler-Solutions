#include <vector>
#include <iostream>

using namespace std;

int64_t Fibonacci_Sum(int64_t x)
{
    int64_t sum = 0;

    vector<int64_t> fibonacci_series = {1, 1, 2};

    while (fibonacci_series[fibonacci_series.size() - 1] + fibonacci_series[fibonacci_series.size() - 2] < x) {
        fibonacci_series.push_back(fibonacci_series[fibonacci_series.size() - 1] + fibonacci_series[fibonacci_series.size() - 2]);
    }

    for (size_t i = 0; i < fibonacci_series.size(); i++) {
        if (fibonacci_series[i] % 2 == 0) {
            sum += fibonacci_series[i];
        }
    }
    return sum;
}

/* This function calculates the sum of even Fibonacci numbers up to a given value 'x'.

It starts by initializing the sum variable to 0 and creating a vector called 'fibonacci_series' with the initial Fibonacci numbers {1, 1, 2}.

Then, it enters a while loop that continues adding Fibonacci numbers to the series until the last two numbers added are less than 'x'. It does this by calculating the sum of the last two numbers in the series and appending it to the vector.

After the while loop, it iterates through each number in the Fibonacci series using a for loop. If a number is even (divisible by 2), it adds it to the 'sum' variable.

Finally, it returns the 'sum' as the result.

In summary, this code calculates the sum of all even Fibonacci numbers up to a given value 'x'. */

int main()
{
    int number = 40000000;
    cout << Fibonacci_Sum(number);
    return 0;
}
