# Write your MySQL query statement below
SELECT e1.unique_id,e.name
FROM employees e
LEFT JOIN
employeeUNI e1 
ON e.id=e1.id