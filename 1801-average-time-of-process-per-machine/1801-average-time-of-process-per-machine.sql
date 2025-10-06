# Write your MySQL query statement below
SELECT machine_id,
       round(avg(time),3) as processing_time
from(
Select a.machine_id,
       a.process_id,
       b.timestamp-a.timestamp as time
from Activity as a
JOIN Activity as b
ON a.machine_id=b.machine_id 
AND a.process_id=b.process_id
AND a.activity_type="start"
AND b.activity_type="end"
)as t
GROUP BY machine_id;