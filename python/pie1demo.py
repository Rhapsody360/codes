from transformers import pipeline
classifier = pipeline("sentiment-analysis")
res= classifier("this is an amazing english sentence")
print(res)