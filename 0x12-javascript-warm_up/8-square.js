#!/usr/bin/node

// a script that prints a square

const args = process.argv.slice(2);
const size = parseInt(args[0], 10);
if (isNaN(size)) {
  console.log('Missing size');
} else {
  for (let i = 0; i < size; i++) {
    console.log('X'.repeat(size));
    // Print a row of X
  }
}
