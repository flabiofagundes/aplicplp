q1 :: Bool -> Bool -> Bool -> String -> Bool
q1 x y z w | w == "AND" = x && y && z | w == "OR" = x || y || z 

main = do

input <- getLine
input2 <- getLine
input3 <- getLine
input4 <- getLine

print (q1 (read input) (read input2) (read input3) (input4))
