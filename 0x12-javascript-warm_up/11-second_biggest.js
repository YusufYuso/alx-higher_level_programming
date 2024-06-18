#!/usr/bin/node

// a script that searches the second biggest integer in the list of arguments

const args = process.argv.slice(2);

if (args.length < 2) {
    console.log(0);
  } else {
    const numbers = args.map(Number)
      .sort((a, b) => b - a);
    console.log(numbers[1]);
  }
