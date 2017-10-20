from math import *

n = int(raw_input())

def trans(f):
    w = len(f)
    nw = w * 3
    nf = [''] * nw
    def cote():
        for i in xrange(w):
            nf[0*w+i] += f[i][::]
            nf[1*w+i] += ' ' * w
            nf[2*w+i] += f[i][::]
    cote()
    for i in xrange(w):
        nf[0*w+i] += ' ' * w
        nf[1*w+i] += f[i][::]
        nf[2*w+i] += ' ' * w
    cote()
    return nf

f = ['X']
for g in xrange(n):
    f = trans(f)

print '\n'.join(f)

