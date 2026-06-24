/*
QUESTION: Counting Left-to-Right Skyline Visibility

Priya is studying the skyline of a city, where buildings are represented by their heights 
listed from left to right. A building is visible when facing the sunset if it is taller 
than all the buildings to its left. Each building has a unique height. Priya wants to 
know how many buildings can be seen when looking westward across the city. Your task is 
to write a program that counts the visible buildings based on their heights.

Input Format:
  - The first line contains an integer n -> number of buildings
  - The second line contains n space-separated integers -> heights of the buildings from left to right.

Output Format:
  - Print a single integer -> the number of buildings visible when facing the sunset
  - Print "Invalid input" if n is negative or any building height is negative.

Constraints:
  - -10^5 <= n <= 10^5
  - Each building height is a distinct positive integer

Sample Input 1:
  6
  4 2 3 1 5 6
Sample Output 1:
  3

Sample Input 2:
  5
  10 15 -7 12 6
Sample Output 2:
  Invalid input
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    
}