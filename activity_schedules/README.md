Problem Statement  :
Given a number of days n (1 ≤ n ≤ 10), print all possible sequences of daily activities using the set:  
{"Swimming", "Running", "Football"}  
subject to the constraint that no two consecutive days have the same activity.

Example run :  
Intput :  
n = 2  
Output :  
Running Swimming  
Running Footbal  
Swimming Running  
Swimming Footbal  
Footbal Running  
Footbal Swimming  
COUNT: 6  

count = 3 * (n ^ ( n - 1 ))  
in this example  
3 * ( 2 ^ ( 2 - 1)) = 6  
Name : Mohammad Abushehada  
ID :  m.abushehada@student.aaup.edu  
