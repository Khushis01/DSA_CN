/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note for C++ users :
To round off the value , please include<cmath> library in the start of the program.
And round off the values in this way 
int ans = round(yourFinalValue);

Sample Input 1 :
10000 A
Sample Output 1 :
17600
*/