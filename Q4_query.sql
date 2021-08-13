SELECT
    CASE
    	WHEN (SELECT Grade FROM Notes WHERE (Students.value BETWEEN notes.min_value AND notes.max_value))
			< 8 THEN "NULL"
        ELSE Name
    	END
    AS Name,
	(SELECT Grade FROM Notes WHERE (Students.value BETWEEN notes.min_value AND notes.max_value))
    as Grade,
	Value
FROM Students
ORDER BY
	Grade DESC,
    Name ASC,
    Value ASC
;