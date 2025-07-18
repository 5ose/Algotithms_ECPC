import string
text = "Hello, Youssef! From Egypt #2025"
no_punct = text.translate(str.maketrans('', '', string.punctuation))
cleaned = no_punct.replace(' ', '')
print(cleaned) 
