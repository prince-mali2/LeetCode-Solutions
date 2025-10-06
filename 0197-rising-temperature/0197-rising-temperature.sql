# Write your MySQL query statement below
SELECT today.id 
from Weather previous
cross join Weather today
where datediff(today.recordDate, previous.recordDate)=1 AND today.temperature>previous.temperature;