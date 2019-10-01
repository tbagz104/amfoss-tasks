require 'nokogiri'
require 'open-uri'

puts "Your search goes here :"

input = gets

puts "\nLoading......."
puts "\n"


doc = Nokogiri:: HTML(open("https://www.google.com/search?num=10&q="+input))

doc.xpath('//div/a/div[text()]').each do |search_result|
    
    puts search_result.content

end    
