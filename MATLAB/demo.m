close all;

I = im2double(imread('guide.png'));
p = im2double(imread('src.bmp'));
r = 3; % try r=2, 4, or 8
% eps = 0.2^2; % try eps=0.1^2, 0.2^2, 0.4^2
eps = 1e-6;

q = guidedfilter_color(I, p, r, eps);
imwrite(q, 'matlab.bmp');
