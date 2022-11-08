import requests

payload={
    'firstname':"Rohit",
    'lastname':'Maity'
} 

r=requests.post("http://httpbin.org/post",data=payload)
# print(r.url)
print(r.text)
print(r.content)