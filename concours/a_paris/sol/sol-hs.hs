import Control.Monad
import Data.List (partition)

main :: IO ()
main = do
    line <- getLine
    let p = read (words line !! 0) :: Float
    line <- getLine
    let n = read (words line !! 0) :: Int
    line <- getLine
    let ps = readNumbers line
    let med = median ps
    case med of
        Nothing -> putStrLn "erreur"
        Just m -> putStrLn $ choix p m

choix p med
  | med < p = "Parie !"
  | otherwise = "Jockey suivant !"

readNumbers :: String -> [Float]
readNumbers = map read . words

-- https://rosettacode.org/wiki/Averages/Median#Haskell
nth :: Ord t => [t] -> Int -> t
nth (x:xs) n
  | k == n = x
  | k > n = nth ys n
  | otherwise = nth zs $ n - k - 1
  where
    (ys, zs) = partition (< x) xs
    k = length ys

median :: (Fractional a, Ord a) => [a] -> Maybe a
median xs
  | n < 1 = Nothing
  | even n = Just ((nth xs (div n 2) + nth xs (div n 2 - 1)) / 2.0)
  | otherwise = Just (nth xs (div n 2))
  where
    n = length xs

