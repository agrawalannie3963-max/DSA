# Write your MySQL query statement below

select e1.name AS Employee
FROM employee e1
LEFT JOIN employee e2
ON e1.managerid=e2.id
WHERE e1.salary>e2.salary
