let rev l =
    let rec rev_aux l r =
        match l with
            | h::t -> rev_aux t (h::r)
            | _    -> r
    in
    rev_aux l []

let map f x =
    let rec map_aux f x r =
        match x with 
            | h::t -> map_aux f t ((f h)::r)
            | _    -> r
    in
    rev (map_aux f x [])

let fold f x s =
    let rec fold_aux f x a =
        match x with
            | h::t -> fold_aux f t (f h a)
            | _    -> a 
    in
    fold_aux f x s

let () =
    let m = (fun x -> 2 * x)
    and f = (fun el acc -> acc + el)
    in
    let x = fold f (map m [1;2;3;4]) 5
    in
    assert ( x = 25 )
