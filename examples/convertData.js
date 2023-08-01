function processArray(inputArray) {
  // Create an array to store the final result
  const resultArray = [];

  // Process segments of 10 elements each
  for (let i = 0; i < inputArray.length; i += 10) {
    const segment = inputArray.slice(i, i + 10);

    // Check if it's time to reverse the segment
    if ((i / 10) % 2 === 1) {
      resultArray.push(...segment.map((item) => item.pixelColour).reverse());
    } else {
      resultArray.push(...segment.map((item) => item.pixelColour));
    }
  }
  resultArray.reverse();
  return resultArray;
}

const outputArray = processArray(data);
console.log(outputArray);

//still have to change from '#whatever' format to 0xwhatever
