#!/usr/bin/node

// a script that prints a message depending of the number of arguments passed

const args = process.argv.length;
console.log(args === 2 ? 'No argument' : args === 3 ? 'Argument found' : 'Arguments found');
