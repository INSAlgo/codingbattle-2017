(do
  (let [p (Integer. (read-line))]
  (let [n (Integer. (read-line))]
  (let [liste (str-to-ints (read-line))]
  (let [med (median liste)]
    (println (if (< med p) "Parie !" "Jockey suivant !")))))))

(defn str-to-ints
[string]
(map #(Integer/parseInt %)
  (.split #" " string)))

(defn median [ns]
  (let [ns (sort ns)
        cnt (count ns)
        mid (bit-shift-right cnt 1)]
    (if (odd? cnt)
      (nth ns mid)
      (/ (+ (nth ns mid) (nth ns (dec mid))) 2))))
