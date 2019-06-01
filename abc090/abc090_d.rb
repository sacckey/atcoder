n,k=gets.split.map(&:to_i)
ans=n*n
if(k!=0)
  cnt=0
  (k+1).upto(n) do |b|
    cnt+=(n+1)/b*(b-k)+ [0,(n+1)%b-k].max
  end
  ans=cnt
end
puts ans