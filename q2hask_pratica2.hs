pertence :: Int -> [Int] -> Bool
pertence w [] = False
pertence w (x:xs) = if (w == x) then True else pertence w xs

q2 :: [Int] -> [Int] -> [Int]
q2 [] l = l
q2 (x:xz) l = if pertence x l then q2 xz l else x: q2 xz l

main = do

input <- getLine
input2 <- getLine

print (q2 (read input) (read input2))
