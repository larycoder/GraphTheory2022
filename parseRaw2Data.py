import os
from array import *

pathFile = os.path.dirname(os.path.realpath(__file__))
rawFile1 = "/raw/Placed_ID.txt"
rawFile2 = "/raw/Vietnam_Distances.txt"

DicData1 ={}
ListData2 = []

try:
  file = open(pathFile + rawFile1)
  data = file.read()
  data = data.split('\n')
  for city in data:
    city = city.split(', ')
    DicData1[str(city[0])] = int(city[1])
  file.close()

  file = open(pathFile + rawFile2)
  data = file.read()
  data = data.split('\n')
  for edge in data:
    edge = edge.split(',')
    edge[0] = edge[0].strip()
    edge[1] = edge[1].strip()
    edge[2] = int(edge[2])
    ListData2.append(edge)

except IOError:
  print("Something wrong went try to open files")
  file.close()

finalData = [[0 for i in range(len(DicData1))] for j in range(len(DicData1))] 

for node in ListData2:
  finalData[DicData1[str(node[0])] - 1][DicData1[str(node[1])] - 1] = node[2]
  finalData[DicData1[str(node[1])] - 1][DicData1[str(node[0])] - 1] = node[2]

try:
  saveFile = open(pathFile + "/data/VN_City_Graph.dat", "w")
  skip = 0
  for row in finalData:
    if skip:
      saveFile.write("\n")
    skip = 1
    for column in row:
      saveFile.write(str(column) + " ")
  saveFile.close()
except IOError:
  print("can not write to file")
  saveFile.close()