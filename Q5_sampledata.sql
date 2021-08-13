create TABLE Students (
	ID int NOT NULL UNIQUE,
  	Name varchar(255),
  	Value int
);

CREATE TABLE Notes (
  Grade Int,
  Min_Value INT,
  Max_Value INT
);

INSERT INTO Students (ID, Name, Value)
VALUES
  (1, 'Julia', 81), (2, 'Carol', 68), (3, 'Maria', 99), (4, 'Andreia', 78), (5, 'Jacqueline', 63),
  (6, 'Marcela', 88)
;


INSERT INTO Notes (grade, min_value, max_value)
VALUES
  (1, 0, 9), (2, 10, 19), (3, 20, 29), (4, 30, 39), (5, 40, 49),
  (6, 50, 59), (7, 60, 69), (8, 70, 79), (9, 80, 89), (10, 90, 100)
;