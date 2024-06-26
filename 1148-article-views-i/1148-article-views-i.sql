# Write your MySQL query statement below
#that equal author_id and viewer_id indicate the same person.
select  Distinct author_id as id from Views where author_id = viewer_id order by author_id asc;
 
