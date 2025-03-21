#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d", &a); scanf("%d", &b);    
    string words[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" }; 
    
    for (int i = a; i <= b; i++) { 
        if (i <= 9) cout << (words[i-1]) << endl;
        else {if (i % 2==0) cout << "even" << endl; else cout << "odd" << endl;}
    }
    
    return 0;
}



// using System;

// class Program
// {
//     static void Main()
//     {
//         int a = int.Parse(Console.ReadLine());
//         int b = int.Parse(Console.ReadLine());
        
//         // Loop through the range a to b (inclusive)
//         for (int i = a; i <= b; i++)
//         {
//             // If i is less than or equal to 9, print its English representation
//             if (i <= 9)
//             {
//                 string[] words = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//                 Console.WriteLine(words[i - 1]);
//             }
//             // If i is greater than 9, print "even" or "odd"
//             else
//             {
//                 if (i % 2 == 0)
//                 {
//                     Console.WriteLine("even");
//                 }
//                 else
//                 {
//                     Console.WriteLine("odd");
//                 }
//             }
//         }
//     }
// }
