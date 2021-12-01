import matplotlib.pyplot as plt
import numpy as np
from random import choice

lambdas = [i for i in range(1, 50)]

l = choice(lambdas)     # Elige una longitud de onda entre las posibles

lim = 40
vals = np.arange(-lim, lim + .25, .25)  # Arma una lista de puntos para analizar

plt.plot([30, -3], [-20, 30], 'ro', color='green', label=f'\u03BB = {l}') # Plotea los puntos de origen de las ondas
plt.xlim(-lim, lim)
plt.ylim(-lim, lim)
plt.grid()


a = type
x  = -lim
v = True

while x <= 40:
    for y in vals:
        r1 = np.sqrt(np.square((-10 - x))+np.square((0 - y)))
        r2 = np.sqrt(np.square((10 - x))+np.square((0 - y)))
        distancia = r1-r2
        if distancia % 1 == 0 and (y != 0 or x != -30) and (y != 0 or x != -30):
            plt.plot(x,y, "ro", color="blue")
        if (distancia % 1) - 0.5 == 0:
            plt.plot(x,y, "ro", color="red")
    x += 0.25

plt.legend()
plt.show()
