r,g,b,n = gets.split.map(&:to_i)
ans=0

0.upto(n) do |i|
  0.upto(n) do |j|
    if n-r*i-g*j>=0 && (n-r*i-g*j)%b==0
      ans = ans + 1
    end
  end
end

puts ans