from transformers import pipeline
classifier = pipeline("zero-shot-classification")
res = classifier(
    "today i accidently burnt food",

    candidate_labels=["emotion","health","nutrients","intention"],
)
print(res)
