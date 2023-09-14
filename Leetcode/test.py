def text_queries(sentences, queries):
    # Write your code here
    
    for query in queries:
        query_words = query.split(" ")
        output = ""
        for i in range(len(sentences)):
            matching_words = 0
            sentence_words = sentences[i].split(" ")
            for word in query_words:
                if word in sentence_words:
                    matching_words = matching_words + 1
            if matching_words == len(query_words):
                output = output + str(i) + " "
        print(output)

text_queries(["jim likes mary", "kate likes tom", "tom does not like jim"], ["jim tom", "likes"])