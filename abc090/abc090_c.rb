n,m=gets.split.map(&:to_i)
ans=0
if !(n==2||m==2)
  ans = [1,n-2].max * [1,m-2].max
end
puts ans