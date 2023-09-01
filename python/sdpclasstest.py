import pandas as pd
import matplotlib as mat
from matplotlib import pylab
# %matplotlib inline
x = [1,2,3,4,5,6,7,8,9,10]
y = [x*9000]
xpd=pd.DataFrame(y)
fig = pylab.plot(x,xpd)
print(xpd)
#print(y)