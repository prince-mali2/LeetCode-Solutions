# Write your MySQL query statement below

SELECT v.customer_id,count(v.customer_id ) as count_no_trans 
from Visits as v
LEFT JOIN Transactions
on v.visit_id = Transactions.visit_id
where Transaction_id is NULL
Group by customer_id;