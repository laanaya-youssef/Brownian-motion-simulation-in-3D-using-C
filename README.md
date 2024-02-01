# Brownian-motion-simulation-in-3D-using-C

We imagine that the Brownian particle in contact with the other particles, which undergoes a specific movement (for a simple model), i.e. it can only be on the lattice points (linear, square, cubic lattice).
The Brownian particle is identified by the letter 'o' and other particles by points '.
All movements are possible, as in the real case .which is worth 3D .

In an axis:
number of possible movements pow(3,1)=3 ;

In a plane:
number of possible movements pow(3,2)=9 ;

In a box:
number of possible movements pow(3,3)=27 ;

The circular case:
the particle moves on a curved line, so
Number of possible movements pow(3,1)=3

The helical case:
the particle moves along a curved line, and is slightly deformed, so the number of possible movements pow(3,1)=3.

Note:
We can add a function that counts the distance traveled by the Brownian particle.

In the case of translation:
--------------------------
either on an axis or on a plane, or in a box, have the same principle, e.g. in 2 dimensions, the function (distance) is written ;
v2+w2=0
distance = distance + 0 ;
v2+w2 = 1
distance = distance +1.
v2+w2 = 2
distance = distance + 1.41. (diagonal)
with v or w which can take (a,b ,c,d,x ,y).

In the circular case:
------------------
if:
x=0
distance = distance + 0 ;
else:
distance = distance + 1 ;

Finally, multiply the distance function by the pitch unit to obtain the real distance travelled by the Brownian particle.

                                               result = distance*unity;
