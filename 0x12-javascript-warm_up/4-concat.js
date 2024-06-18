#!/usr/bin/node

//  a script that prints two arguments passed to it, in the following format: “ is ”
const args = process.argv.slice(2);
// slice(2) to skip the first two elements (node and script path)

console.log(`${args[0]} is ${args[1]}`);
