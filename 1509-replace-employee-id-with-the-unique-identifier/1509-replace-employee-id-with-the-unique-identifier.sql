# Write your MySQL query statement below

SELECT unique_id , name
from Employees as a
LEFT JOIN EmployeeUNI as b
on a.id = b.id;
