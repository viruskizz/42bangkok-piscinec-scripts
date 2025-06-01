from __future__ import print_function
import sys
import random

def _rm_unavailable(tbl, avail_num, i, j, size):
    for tmp in range(0, size):
        try:
            avail_num.remove(tbl[i][tmp])
        except:
            pass
    for tmp in range(0, size):
        try:
            avail_num.remove(tbl[tmp][j])
        except:
            pass
    return avail_num

def get_views(tbl, size):
    len = 0
    max = 0
    final = ""

    for j in range(0, size):
        len = 0
        max = 0
        for i in range(0, size):
            if tbl[i][j] > max:
                max = tbl[i][j]
                len += 1
        final += "{} ".format(len)

    for j in range(0, size):
        len = 0
        max = 0
        for i in range(size - 1, -1, -1):
            if tbl[i][j] > max:
                max = tbl[i][j]
                len += 1
        final += "{} ".format(len)

    for i in range(0, size):
        len = 0
        max = 0
        for j in range(0, size):
            if tbl[i][j] > max:
                max = tbl[i][j]
                len += 1
        final += "{} ".format(len)

    for i in range(0, size):
        len = 0
        max = 0
        for j in range(size - 1, -1, -1):
            if tbl[i][j] > max:
                max = tbl[i][j]
                len += 1
        final += "{} ".format(len)
    return final.strip()

def _print_views(views):
    print(views)

def _print_table(tbl, size):
    print ("")
    for i in range(0, size):
        for j in range(0, size):
            print (tbl[i][j], end=" ")
        print ("")

def _generate_possible_table(size):
    tbl = [[0 for x in range(size)] for y in range(size)]
    i = 1
    j = 1
    new = 0
    tmp = 0
    avail_num = []
    for i in range(0, size):
        for j in range(0, size):
            avail_num = []
            for tmp in range(1, size + 1):
                avail_num.append(tmp)
            avail_num = _rm_unavailable(tbl, avail_num, i, j, size)
            if avail_num == []:
                return (_generate_possible_table(size))
            new =  random.choice(avail_num)
            tbl[i][j] = new
    return tbl

def _generate_impossible_table(size):
    tbl = []
    for _ in range(0, size):
        ttbl = [random.randint(1, size) for _ in range(size)]
        tbl.append(ttbl)
    return tbl

def get_possible_view(size):
    tbl = _generate_possible_table(size)
    views_str = get_views(tbl, size)
    views = list(map(int, views_str.split()))
    return views, tbl

def get_impossible_view(size):
    tbl = _generate_impossible_table(size)
    views = get_views(tbl, size)
    return list(map(int, views.split()))

if __name__ == "__main__":
    if len(sys.argv) != 2 or int(sys.argv[1]) < 3 or int(sys.argv[1]) > 9:
        print ("Usage: ./generator <size (3-9)>")
        sys.exit(0)
    size = int(sys.argv[1])
    tbl = 0
    while tbl == 0:
        tbl = _generate_possible_table(size)
    views = get_views(tbl, size)
    _print_views(views)
    _print_table(tbl, size)
