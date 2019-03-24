#!/bin/bash

rm -f my_out.txt

for i in {1..6}; do
    echo "------------------------------------------------" >> my_out.txt
    ./banker config"$i".txt >> my_out.txt
done

DIFF=$(diff -i -w my_out.txt ta_output.txt)

if [ $? -eq 0 ] && [ "$DIFF" = "" ]
then
    echo "Same outputs!. But do more tests to make sure that it is bug-free"
else
    echo "Seems like we have different outputs☠"
fi

