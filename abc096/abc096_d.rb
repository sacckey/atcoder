require 'prime'
n=gets.to_i
primes = Prime.each(55555).to_a

array=[]
primes.each do |prime|
  if array.size == n
    break
  end
  if prime%5==1
    array << prime
  end
end

puts array.join(' ')