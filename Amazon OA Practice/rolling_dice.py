def missingNumber(v) {
    res = [0 for i in range(7)]

    for i in range(7):
        moves = 0
        for j in v:
            if j == i:
                continue
            if j+i == 7:
                moves +=1
            moves +=1
        res[i] = moves
    return max(res)
}