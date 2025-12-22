-- 코드를 입력하세요
SELECT a.flavor
from FIRST_HALF a, ICECREAM_INFO b 
where a.flavor = b.flavor
AND a.TOTAL_ORDER > 3000
AND b.INGREDIENT_TYPE = 'fruit_based'
order by a.TOTAL_ORDER desc;