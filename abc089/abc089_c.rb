n=gets.to_i
h=Hash.new(0)
n.times do
  s=gets.chomp
  h[s[0]] += 1
end

ans=0
'MARCH'.split("").combination(3) do |a,b,c|
  ans+=h[a]*h[b]*h[c]
end
puts ans