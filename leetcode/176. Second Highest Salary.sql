# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee E1
WHERE E1.salary < (
    SELECT MAX(salary)
    FROM Employee
)