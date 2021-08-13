# teste_C_SQL
C / SQL programming knowledge evaluation.

## How-to and comments on the questions

### Q2 ###
* Compile and run the file *Q2.c*, no input needed
- The instructions ask for "as few lines as possible", I've tried the simplest/shortest solution within my knowledge.
Obviously there are some crazy optimizations around the Web, but I've tried not to follow that and also to finish everything within a reasonable time frame

### Q3 ###
* Compile and run the file *Q3.c*
- The script checks for valid string lengths ([1-100] chars long) and only accepts lowercase characters, following the provided constraints;
- the constraint from **k** was altered from [1-100] to [1-200], since two strings 100-chars with the initial character long would result in a number of changes equal to 200. **Note:** Actually the test should also cover 0, but *scanf()* doesn't cover for that, and to alter the program I'd have to study more.
*NOTE* Example 2 seems wrong/incomplete, thus it was ignored.

### Q4 ###
The unit test task was not completed due to lack of knowledge on how to do it on C (I was just beginning to learn it on Python, which is my current main language).

### Q5 ###
* Download *Q4_query.sql* (the actual answer to the exercise) ans (optionally) *Q4_sampledata.sql* (Sample data to test the query).
* Load the table from the sample data, or create one yourself following the guidelines for its structure.
* Execute the query from the file.
**NOTES:**
- The instructions are confusing:
    -- *If there are more than one student with the same grade (...) sort (...) by their names in alphabetical order"* - but the output example shows Marcela and Julia with the same grade and their names are ordered in reverse (Marcela first, then Julia).
    -- *... if the grade is less than 8, (...) list them in grades in descending order* - Inconclusive, both students with grades below 8 have the same grade. Anyway, this was implemented.
    -- *If there are more than one student with the same grade (1-7), sort those students in particular by their grades in ascending order.* - That doesn't seem to make any sense, if they have the same grade, there's nothing to sort. We assumed that the question meant ordering by **Values** in ascending order, because that's what seems to have happened in the sample.
    -- We tried to implement the rule ONLY for the NULL students, but it seems that SQLite



