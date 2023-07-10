from transformers import pipeline, set_seed
generator = pipeline('text-generation', model='gpt2-xl')
set_seed(42)
res=generator("Hello, I'm a language model,", max_length=30, num_return_sequences=5)

print(res)