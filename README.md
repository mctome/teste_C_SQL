# teste_C_SQL
C / SQL programming knowledge evaluation.

## How-to and comments on the questions

### Q2 ###
* Compile and run the file *Q2.c*, no input needed
**NOTE:** The instructions ask for "as few lines as possible", I've tried the simplest/shortest solution within my knowledge.
Obviously there are some crazy optimizations around the Web, but I've tried not to follow that and also to finish everything within a reasonable time frame

### Q3 ###
* Compile and run the file *Q3.c*
- Input the source (**s**), target (**t**) and length of changes (**k**) when required
- The script checks for valid string lengths ([1-100] chars long) and only accepts lowercase characters, following the provided constraints
**Notes:** 
- The constraint from **k** was altered from [1-100] to [1-200], since two strings 100-chars with the initial character long would result in a number of changes equal to 200
- Actually the test should also allow 0 for the length of changes, but *scanf()* doesn't accept that as input, and to alter the program to take that into account is beyond my current knowledge
- *Example 2* seems wrong/incomplete, thus it was ignored.

### Q4 ###
The unit test task was not completed due to lack of knowledge on how to do it on C (I was just beginning to learn it on Python, which is my main programming language at the moment).

### Q5 ###
* Download *Q5_query.sql* (the actual answer to the exercise) ans (optionally) *Q5_sampledata.sql* (Sample data to test the query).
* Load the table from the sample data, or create one yourself following the guidelines for its structure.
* Execute the query from the file.
**NOTES:**
- The instructions are confusing:
    -- *If there are more than one student with the same grade (...) sort (...) by their names in alphabetical order"* - but the output example shows Marcela and Julia with the same grade and their names are ordered in reverse (Marcela first, then Julia)
    -- *... if the grade is less than 8, (...) list them in grades in descending order* - Inconclusive, both students with grades below 8 have the same grade. Anyway, this was implemented
    -- *If there are more than one student with the same grade (1-7), sort those students in particular by their grades in ascending order.* - That doesn't seem to make any sense, if they have the same grade, there's nothing to sort. We assumed that the question meant ordering by **Values** in ascending order, because that's what seems to have happened in the sample
    -- We tried to implement the rule ONLY for the NULL students, but we were unable to do so using *ORDER BY CASE*. For this specific case it works the same, but that could be improved
    -- There's a repeated SELECT statement in my solution that could possibly be avoided, but I was unable to do that.

### Q7 ###
* Download *Q7_query.sql* (the actual answer to the exercise) ans (optionally) *Q7_sampledata.sql* (Sample data to test the query).
* Load the table from the sample data, or create one yourself following the guidelines for its structure
* Execute the query from the file.

### Q8 ###
* Download/open the file *Q8.txt*. Inside you'll find the sequence of commands for each one of the tasks
* We also considered that each of the tasks would be independent from each other; if they're planned to run in batch, it might be better to remove some of the **x** and **bq** (instructions about which ones would have to be removed are at the end of the file).

### Q9 ###
* Compile and run the file *Q9.c*
* Instructions will be presented on the screen.



