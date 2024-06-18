#!/usr/bin/node

// a script that prints My number: <first argument converted in integer> if the first argument can be converted to an integer
const args = process.argv.slice(2);

const num = parseInt(args[0], 10);
// Convert the first argument to an integer using base 10
console.log(isNaN(num) ? 'Not a number' : `My number: ${num}`);
