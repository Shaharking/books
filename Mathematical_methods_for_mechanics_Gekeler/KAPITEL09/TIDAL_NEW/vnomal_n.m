function VN = vnomal_n(e,V,TANGENTS,SEGNR);
%FLAG = 1: end points are omitted if boundary is not closed
%FLAG = 2; points are not omitted if boundary is not closed
% boundary specified by SEGNR must be ordered:
% counterclockwise for land, clockwise for island 

FLAG = 1;
E = [];
if ~isempty(SEGNR)
   for I = 1:length(SEGNR)
      J  = find(e(5,:) == SEGNR(I)); 
      E = [E,e(:,J)];
   end
end
if FLAG ==1
   if E(1,1) ~= E(2,size(E,2))
      E = E(:,2:size(E,2));
   end
   VN = V; LE = size(E,2);
   for K = 1:LE
      J = find(TANGENTS(1,:) == E(1,K));
      VS = V(1,E(1,K))*TANGENTS(2,J) + V(2,E(1,K))*TANGENTS(3,J);
      VN(1,E(1,K)) = VS*TANGENTS(2,J); VN(2,E(1,K)) = VS*TANGENTS(3,J);
   end
end
if FLAG == 2
   VN = V; LE = size(E,2);
   for K = 1:LE
      J = find(TANGENTS(1,:) == E(1,K));
      VS = V(1,E(1,K))*TANGENTS(2,J) + V(2,E(1,K))*TANGENTS(3,J);
      VN(1,E(1,K)) = VS*TANGENTS(2,J); VN(2,E(1,K)) = VS*TANGENTS(3,J);
   end
   if E(1,1) ~= E(2,LE)
      J = find(TANGENTS(1,:) == E(2,LE));
      VS = V(1,E(2,LE))*TANGENTS(2,J) + V(2,E(2,LE))*TANGENTS(3,J);
      VN(1,E(2,LE)) = VS*TANGENTS(2,J); VN(2,E(2,LE)) = VS*TANGENTS(3,J);
   end
end
