n=gets.to_i

ans=0;ba=0;a=0;b=0
n.times do |i|
  s=gets.chomp
  ans=ans+s.scan('AB').size
  if s[0]=='B' && s[-1]=='A'
    ba=ba+1
  elsif s[0]=='B'
    b=b+1
  elsif s[-1]=='A'
    a=a+1
  end
end

if ba==0
  ans=ans+[a,b].min
else
  if a+b>0
    ans=ans+ba+[a,b].min
  else
    ans=ans+ba-1
  end
end

puts ans