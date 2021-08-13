-- This one is a bit hacky, we're using "Value" instead of "Grade"
SELECT 
	CASE
    	when
            value < 70 THEN 'null'
        	ELSE name
	END as name,
    grade, value
from
	Students, Notes
where
	grade = (SELECT grade from Notes where (Students.value BETWEEN notes.min_value and notes.max_value))
order by grade DESC, name ASC, value ASC
;