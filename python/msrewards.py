import webbrowser
import time
str1="bing microsoft mha midoriya youtube instagram dabi bakugo allmight attackontitan attacktitan erenyeager naruto big3 chatgpt openai dalle dragonball goku vegeta bulma chichi gohan picolo kingyama kai jiren t.o.p goten trunks roshi yamcha schinchan doraemon perman"

# Define a list of 10 websites to search for
#websites = ['https://www.google.com', 'https://www.wikipedia.org', 'https://www.youtube.com', 'https://www.github.com', 'https://www.linkedin.com', 'https://www.amazon.com', 'https://www.nytimes.com', 'https://www.netflix.com', 'https://www.twitter.com', 'https://www.reddit.com','mha','midoriya','bakugo','instagram','snapchat','dabi']
websites=str1.split()
# Open Microsoft Edge and search for each website in the list with a delay of 5 seconds between each search
for website in websites:
    search_url = 'https://www.bing.com/search?q=' + website
    webbrowser.get('windows-default').open(search_url)
    time.sleep(5)