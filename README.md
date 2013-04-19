AdvProgPA5
==========

bin sort with linked lists

CSC 3320
Program Assignment 5
Spring 2013

Due Date:
See class schedule.
Delivery
This is a multiple file program that must be archived using the tar command. Deliver
a single file named pa5.tgz (all lowercase) as an attachment to an email that you
send to the class account 3320@orion.cudenver.edu. Put PA5 in the subject field, and
your name in the body of the email. I prefer you use your email account on the Ouray
server to deliver the program. Create a file named pa5.tgz using the tar command to
archive and compress your files.
Program objectives
The objectives of this assignment are as follows.
1. Test your ability to design software and/or hardware to meet desired needs
(measurable outcome (b)).
2. Test your ability to identify, formulate, and solve computer science and
engineering problems (measurable outcome (c)).
Value
This program is worth 15 points. The distribution of points will be as follows.
Criterion
Templates
Linked-list (stl list)
Student record
Program style (see below)
Correct output with annotation
Error checking
Greeting
Value
1
2
1
3
6
1
1
Background
Suppose that a chain (linked-list) is used to maintain a list of students in a class. Each
node of the chain has fields for a student name, social security number, and a total score
on all exams. Assuming that all scores are integers in the range [0, 100], we can sort these
nodes using a comparison sort. However, a faster way to sort these nodes based on
scores is to use a bin sort. In a bin sort, nodes are placed into bins, where each bin
contains scores that are equivalent. We then combine the bins to create a sorted chain (see
below for a description of bin sort).
Problem
Use the stl list to sort student records based on test scores using a bin sort.

1
CSC 3320
Program Assignment 5
Spring 2013

Input
A data file containing student records, where each record contains a name, social security
number and total of test scores. Each records occupies one line of the file, and the fields
of each record are delimited by commas.
Output
The sorted records, one record per line, on the standard output. Notice that you must
format the fields so that the columns align.
Bin sort
Below is a depiction of bin sort. Names have been simplified to characters, and social
security numbers are not shown. In addition, scores are shown as integers in the range
[0,5]
A
2
→
B
→
4
→
C
5
(a) Input chain
A
Bin 0
A
Bin 1
2
→
E
E
Bin 2
3
D
→
→
B
D
Bin 4
Bin 3
(b) Nodes in bins
→
B
4
(c) Sorted chain
4
D
4
E
C
Bin 5
→
C
Program requirements
1. Use the stl list to store the records.
2. Begin the program with an appropriate greeting.
3. Read the input file from argv[1].
4. Compute the sort.
5. Display the results in tabular form, one field per column with column formatting.
6. Use templates where appropriate.
7. Create a student record type.

2