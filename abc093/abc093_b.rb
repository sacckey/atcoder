a, b, x = gets.split.map(& :to_i)

ans = (a..[a+x-1,b].min).to_a + ([b-x+1,a].max..b).to_a

puts ans.uniq.sort
