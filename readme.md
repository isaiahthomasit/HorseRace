```text

advance(horseNum, horses)
  generate random coin flip
  if coin == heads
    increase horse position by 1
  else
    no change
   
printLane(horseNum, horses)
  analyze positions 0-14
  for each position 0-14
     if current position == horse's positon
       print horseNum
     else
      print "."

bool isWinner(horseNum, horses)
  if horse position == 14
    return true
  else
    return false

main()
  create array of 5 horse
  set all horse positions to 0
  set winner == false

  while winner == false
  
    for each horse 0-4
      advance the horse with advance()

    for each horse 0-4
      print the horses lane with printLane()

    for each horse 0-4
      check for winner with isWinner() 
    
      if the horse is a winner
        print "Horse x WINS!"
        set winner = true

  if winner == flase
    prompt user to press Enter


```

