#!/usr/bin/node

// a script that prints the first argument passed to it
const args = process.argv.slice(2);
console.log(typeof args[0] === 'undefined' ? 'No argument' : args[0]);
