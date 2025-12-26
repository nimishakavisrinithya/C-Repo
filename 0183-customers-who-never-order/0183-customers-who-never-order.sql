/* Write your PL/SQL query statement below */
select c.name as customers from
Customers c
left join
Orders o
on c.id = o.customerId
where o.id is NULL;
