my_array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

my_array.each { |x| puts x if x.even? }


=begin
OR

my_array.each { |x| puts x if x % 2 == 0 }
=end
