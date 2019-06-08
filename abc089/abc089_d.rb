h,w,d = gets.split.map(&:to_i)
ha={}
h.times do |i|
  ar=gets.split.map(&:to_i)
  w.times do |j|
    ha[ar[j]]=[i,j]
  end
end

dis=Array.new(h*w+1,0)
(1..h*w).each do |i|
  if i>d
    dis[i]=dis[i-d]+(ha[i].first-ha[i-d].first).abs+(ha[i].last-ha[i-d].last).abs
  end
end

gets.to_i.times do
  l,r=gets.split.map(&:to_i)
  puts dis[r]-dis[l]
end