# teste_C_SQL
C / SQL programming knowledge evaluation.

## How-to and comments on the questions

### Q2 ###
1. Download, compile and run the file `Q2.c`, no input needed.
**NOTE:** The instructions ask for "as few lines as possible", I've tried the simplest/shortest solution within my knowledge. One could find some smart/crazy optimizations around the Web for the task (for example, search the 'net for *"rosetta stone fizzbuzz"*), but I've tried to do it myself and also to finish the task within a reasonable time frame.

### Q3 ###
1. Compile and run the file `Q3.c`.
1. Input the source `s`, target `t` and total changes `k` when required.
    The script checks for valid string lengths (1-100 chars long) and only accepts lowercase characters (no numbers or spaces or punctuation), following the constraints provided.

**NOTES:** 
1. The constraint for `k` was altered from 1-100 to 1-200, since two strings 100-chars with the initial character long would result in a number of changes equal to 200.
    Actually, the test should also allow 0 for the length of changes, but `scanf()` doesn't accept that as input, and to alter the program to take that into account is beyond my current knowledge.
1. *Example 2* seems wrong/incomplete, thus it was ignored.
1. *Example 1* is also bogus (it has spaces that wouldn't be allowed since we're accepting only *lowercase characters*), and the example ignores them. Taking into accout the spaces, there would've been 19 substitutions (12 deletions and 7 insertions) for both strings to match.

### Q4 ###
- The unit test task was not completed due to lack of knowledge on how to do it on C (I was just beginning to learn it on Python, which is my main programming language at the moment). Sorry :/

### Q5 ###
1. Download `Q5_query.sql` (the actual answer to the exercise) ans (optionally) `Q5_sampledata.sql` (Sample data to test the query).
1. Load the table from the sample data, or create one yourself following the guidelines for its structure.
1. Execute the query from the file.

**NOTES:**
1. The instructions are confusing:
- ***"If there are more than one student with the same grade (...) sort (...) by their `name` in alphabetical order".***
    But the output example shows Marcela and Julia with the same grade and their names are ordered in reverse (Marcela first, then Julia).
- ***"... if the `grade` is less than 8, (...) list them in grades in descending order".***
  Inconclusive, both students with grades below 8 have the same grade. Anyway, this was implemented.
- ***"If there are more than one student with the same grade (1-7), sort those students in particular by their `grades` in ascending order."***
That doesn't seem to make any sense, if they have the same grade, there's nothing to sort. We assumed that the question meant ordering by `Values` in ascending order, because that's what seems to have happened in the sample.

Issues:
1.  We tried to implement the rule ONLY for the `NULL` students, but we were unable to do so using `ORDER BY CASE`. For this specific case it works the same, but that could be improved.
1. There's a repeated `SELECT` statement in my solution that could possibly be avoided, but I was unable to do that.

### Q7 ###
1. Download `Q7_query.sql` (the actual answer to the exercise) ans (optionally) `Q7_sampledata.sql` (Sample data to test the query).
1. Load the table from the sample data, or create one yourself following the guidelines for its structure.
1. Execute the query from the file.

### Q8 ###
1. Download and/or open the file `Q8.txt`. Inside you'll find the sequence of commands for each one of the tasks.
**NOTE:** We considered that each of the tasks would be independent from each other. If they're planned to run in batch, it might be better to remove some of the `x` and `bq` (instructions about which ones would have to be removed are at the end of the file).

### Q9 ###
* Downlaod, compile and run the file `Q9.c`.
* Instructions will be presented on the screen.



