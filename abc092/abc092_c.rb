n=gets.to_i
a=gets.split.map(&:to_i)
a.insert(0,0)
a<<0

sum=0
1.upto(n) do |i|
  sum+=(a[i]-a[i-1]).abs
end
sum+=(a[n]).abs

1.upto(n) do |i|
  diff = (a[i-1]-a[i+1]).abs - (a[i-1]-a[i]).abs - (a[i]-a[i+1]).abs
  puts sum+diff
end