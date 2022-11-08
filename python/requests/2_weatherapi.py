import requests

url = "https://coffee.alexflipnote.dev/random/"

# querystring = {"q":"London","days":"3"}

# headers = {
# 	"X-RapidAPI-Key": "SIGN-UP-FOR-KEY",
# 	"X-RapidAPI-Host": "weatherapi-com.p.rapidapi.com"
# }

response = requests.get(url,verify=False)
print(response.json())