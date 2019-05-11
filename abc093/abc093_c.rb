a = gets.split.map(&:to_i)
sum = a.inject(:+)
ans =  sum%2 == a.max*3%2 ? (a.max*3-sum)/2 : ((a.max+1)*3-sum)/2
puts ans