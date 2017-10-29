import Control.Monad

mean = uncurry (/) . foldr (\e (s,c) -> (e+s,c+1)) (0,0)

main :: IO ()
main = do
    l1 <- getLine
    l2 <- getLine
    l3 <- getLine
    l4 <- getLine
    l5 <- getLine
    let note = read (words l1 !! 0) :: Float
    let [mini, maxi] = readNumbers l2
    let moy = read (words l3 !! 0) :: Float
    let notes = (readNumbers l5) ++ [note]
    putStrLn $ conclusion note mini maxi moy notes

conclusion :: Float -> Float -> Float -> Float -> [Float] -> String
conclusion note mini maxi moy notes
    | (note > maxi
    || note < mini
    || mini > maxi
    || abs (mean notes) - moy > 0.02
    || not (elem mini notes)
    || not (elem maxi notes)
    ) = "Jack ! Viens ici !"
    | otherwise = "RAS"

readNumbers :: String -> [Float]
readNumbers = map read . words

