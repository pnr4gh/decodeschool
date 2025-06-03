from os import listdir
from os.path import isfile, join
files = [f for f in listdir("/home/administrator/files") if isfile(join("/home/administrator/files", f))]
for file in files:
    print(file)
    f=open(file,'r')
    print(f.read())
    print("\n\n End of File \n\n")
    
    

