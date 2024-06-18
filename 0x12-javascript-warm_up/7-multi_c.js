#!/usr/bin/node

// a script that prints x times “C is fun”

const args = process.argv.slice(2);
if (isNaN(args)) {
  console.log('Missing number of occurrences');
} else {
  for (let i = 0; i < args; i++) {
    console.log('C is fun');
  }
}
