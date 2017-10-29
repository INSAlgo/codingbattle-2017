import Control.Monad

main :: IO ()
main = do
    line <- getLine
    putStrLn $ substring 4 line

substring :: Int -> String -> String
substring 0 str = str
substring n (_:str) = substring (n - 1) str

