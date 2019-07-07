n,a,b = gets.split.map(&:to_i)
ans=0
1.upto(n) do |i|
  num=i
  sum=0
  while num!=0
    sum+=num%10
    num/=10
  end
  if sum>=a && sum<=b
    ans+=i
  end
end
puts ans