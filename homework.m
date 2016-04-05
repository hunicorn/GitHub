%%% İsmail Akdağ
%%% 01.37
%%% 6.4.2016
clc
m=input('Please enter the number of rows:');
n=input('Please enter the number of columns:');

A=round(rand(m,n).*99)+1
maksimum=max(max(A));
minimum=min(min(A));


for i=1:m
    for j=1:n
        if A(i,j)==maksimum
            i1=i;
            j1=j;
        end
        if A(i,j)==minimum
            i2=i;
            j2=j;
        end
    end
end

fprintf('The A(%d,%d)=%d is max. \n',i1,j1,maksimum)
fprintf('The A(%d,%d)=%d is min.\n',i2,j2,minimum)

if i1>=i2 && j1>=j2
    B=-A(i2:i1,j2:j1)
    A(i2:i1,j2:j1)=B

elseif i1>=i2 && j2>=j1
    B=-A(i2:i1,j1:j2)
    A(i2:i1,j1:j2)=B

elseif i2>=i1 && j1>=j2
    B=-A(i1:i2,j2:j1)
    A(i1:i2,j2:j1)=B

elseif i2>=i1 && j2>=j1
    B=-A(i1:i2,j1:j2)
    A(i1:i2,j1:j2)=B

end


