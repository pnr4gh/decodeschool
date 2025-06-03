file=open("sample.txt",'r')
content = file.readline()
while(content):
    print(content)
    content=file.readline()
file.close()
