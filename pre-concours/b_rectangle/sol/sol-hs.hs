import Control.Monad

main :: IO ()
main = do
    l <- getLine
    let m = read (words l !! 0) :: Int
    let n = read (words l !! 1) :: Int
    l <- getLine
    let c = head l
    rectangle m n c

rectangle :: Int -> Int -> Char -> IO ()
rectangle 0 _ _ = return ()
rectangle m n c = do
    putStrLn $ replicate n c
    rectangle (m - 1) n c
