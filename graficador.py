import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt('data.dat')

plt.figure()
plt.plot(data[:,0],data[:,1],label='Velocidad')
plt.plot(data[:,0],data[:,2],label='Posición')
plt.xlabel('t')
plt.legend()
plt.savefig('primera.png')

plt.figure()
plt.plot(data[:,1],data[:,2])
plt.xlabel('v')
plt.ylabel('x')
plt.savefig('laFase.png')