#!/bin/bash

for test in tests/*.in
do
	./a.out < $test > $test.actual
	if ! diff -q $test.actual $test.expected
	then
		echo "Test $test failed"
		exit 1
	fi
done
