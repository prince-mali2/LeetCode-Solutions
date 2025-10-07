# Write your MySQL query statement below
SELECT e1.name
FROM Employee e1
JOIN (
    SELECT e2.managerId, count(e2.managerId) as total
    FROM Employee e2
    GROUP BY e2.managerId
    having count(e2.managerId)>=5
) e2
on e1.id = e2.managerId;