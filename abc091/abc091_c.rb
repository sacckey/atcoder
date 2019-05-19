n=gets.to_i
red=n.times.map{gets.split.map(&:to_i)}.sort_by!{|a,b| b}.reverse!
blue=n.times.map{gets.split.map(&:to_i)}.sort_by!{|c,d| c}

ans=0
blue.each do |c,d|
  red.each do |a,b|
    if a<c && b<d
      ans+=1
      red.delete [a,b]
      break
    end
  end
end

puts ans