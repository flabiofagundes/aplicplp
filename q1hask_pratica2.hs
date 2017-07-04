q1 :: [Int] -> Int -> Int
q1 x y | y == 1 = head x | otherwise = q1 (tail x) (y-1)

main = do

input <- getLine
input2 <- getLine

print (q1 (read input) (read input2))
