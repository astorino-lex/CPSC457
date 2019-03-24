Download every file in this directory including my outputs

Compile your code as follows:
g++ banker.cpp -o banker

run run.sh script as follows:
bash run.sh

It is just a simple output string check on your output file my_out.txt and my output file ta_output.txt. As long as you use the same message strings as me and you do not change input/output mechanism that Pavol provided, we should have the same outputs. It will make the grading easier if you use the following messages:

request is invalid (exceeding declared max for process).
not enough resources available.
request would result in an unsafe state.

For safe state sequence, with n processes, the output format is(possibly in a different order):
P0, P1, P2, ... ,Pn-1

This is not an official grader. There may be cases which are not covered here and included in the grading test cases. Please do your own tests as well.
