sum = gets.split.map(&:to_i).inject(:+)
if sum >= 22
  puts 'bust'
else
  puts 'win'
end