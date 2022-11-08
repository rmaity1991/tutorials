import requests
payload={
    'firstname':"Rohit",
    'lastname':'Maity'
} 

r=requests.get("http://httpbin.org/get",params=payload)
# print(response_object.url)
# print(response_object.status_code)

print(r.content)
print(r.text)