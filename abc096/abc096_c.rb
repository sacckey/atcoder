h,w=gets.split.map(&:to_i)
s=h.times.map{'.'+gets.chomp+'.'}
d='.'*(w+2)
s=[d]+s+[d]

flg =false
1.upto(h) do |i|
  1.upto(w) do |j|
    if s[i][j]=='#'
      if s[i-1][j]=='.' && s[i+1][j]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.'
        flg =true
      end
    end
  end
end

if flg
  puts "No"
else
  puts "Yes"
end

