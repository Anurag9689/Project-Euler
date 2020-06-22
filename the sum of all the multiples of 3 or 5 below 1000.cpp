/// If we list all the natural numbers below 10 that are multiples of 3 or 5,
/// we get 3, 5, 6 and 9. The sum of these multiples is 23.
/// Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream> /// Add the header file iostream which have both istream & ostream class for object cin & cout respectively.
using namespace std;  /// adding the std (standard) namespace file globally by using the keyword 'using'
int main()             /// main() function with int data type
{
    int x=0;            /// declared & initialized x=0; variable with datatype int
    for(int i=1; i<1000; i++) /// using for loop to generate the numbers form 1 to 1000
    {
        if(i%3==0 || i%5==0)    /// if is used to check that if the 'i' is multiple of 3 or(||) multiple of 5
        {
            x=x+i;                 /// if a multiple is detected for anyone of them then adding that multiple with x
        }                           /// x is normally used as a storage type element for 'i'
    }
    cout << "The sum of all the multiples of 3 or 5 below 1000: "<< x <<endl;         /// console outputting the total x;
    return 0;  /// returning 0 for showing the output is correct
}
