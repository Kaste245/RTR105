s0(x) = 1
s1(x) = s0(x) + x
s2(x) = s1(x) + x**2 / 1*2
s3(x) = s2(x) + x**3 / 1*2*3
plot [-2:2] exp(x), s0(x), s1(x), s2(x), s3(x)
