let r = Math.random.bind();

function getRandomWord(wN, wL, pC){
  let o = ""
  for(let i = -1; i ++ < wN;){
    for(let j = -1; j ++ < wL;)
      o += String.fromCharCode(r() * 25 + 97)
    if(r < pC / 100)
      o += ". "
    else if(r < pC)
      o += ", "
    else if(i != wN)
      o += " "
  }
  o += "."
  return o
}

// i have already made this earlier :(
// i can't be bothered to redo it nicely