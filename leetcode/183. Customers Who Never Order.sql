# Write your MySQL query statement below
SELECT name as Customers
FROM Customers C1
WHERE C1.id NOT IN (
    SELECT C2.id
    FROM Customers C2
    JOIN Orders O ON O.customerId = C2.id
)