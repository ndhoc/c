# Write your MySQL query statement below
SELECT E.name as Employee
FROM Employee E
LEFT JOIN Employee M ON M.id = E.managerId
WHERE E.salary > M.salary