n=gets.to_i
s=[];
n.times do
  s << gets.chomp
end

m=gets.to_i
t=[];
m.times do
  t << gets.chomp
end

ans=0
cnt=0
s.each do |str1|
  s.each do |str2|
    if str1==str2
      cnt+=1
    end
  end
  t.each do |str3|
    if str1==str3
      cnt-=1
    end
  end
  ans = cnt if cnt>ans
  cnt = 0
end

puts ans