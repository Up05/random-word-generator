let r = Math.random.bind();

function getRandWord(wordCount, avgWordLength, punctRate){
  let o = "";
  for(let i = -1; i ++ < wordCount;){
    wL = avgWordLength + (r() * avgWordLength - (avgWordLength / 2));
    for(let j = -1; j ++ < wL;)
      o += String.fromCharCode(r() * 25 + 97)
    if(r() < punctRate / 20)
      o += ". "
    else if(r() < punctRate && i != wordCount)
      o += ", "
    else if(i != wordCount)
      o += " "
  }
  return o + "."
}


console.log(getRandWord(100, 10, 0.1))