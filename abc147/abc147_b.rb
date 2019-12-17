s = gets.chomp
len = s.size
ans = 0
(len/2).times do |i|
  ans += 1 if s[i] != s[-i-1]
end

puts ans