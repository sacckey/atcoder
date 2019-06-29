require 'prime'

pri = Array.new(100000,0)
0.upto(100000) do |i|
  if Prime.prime?(i)
    pri[i]+=1
  end
end

rui = Array.new
rui[0]=0
1.upto(100000) do |i|
  if pri[i]==1 && pri[(i+1)/2]==1
    rui[i]=rui[i-1]+1
  else
    rui[i]=rui[i-1]
  end
end

q=gets.to_i
q.times do
  l,r = gets.split.map(&:to_i)
  puts rui[r]-rui[l-1]
end