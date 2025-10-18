import math

def solve():
    # 입력 받기
    N, D, p = map(int, input().split())
    monsters = list(map(int, input().split()))

    turns = 0
    current_monster = 0  # 현재 타겟 몬스터 인덱스

    while current_monster < N:
        # 현재 몬스터가 이미 죽었으면 다음 몬스터로 이동
        if monsters[current_monster] <= 0:
            current_monster += 1
            continue

        turns += 1

        # 현재 몬스터에게 D 대미지
        monsters[current_monster] -= D

        # 오버킬 처리
        if monsters[current_monster] < 0:
            overkill_damage = -monsters[current_monster]
            next_monster = current_monster + 1

            # 다음 몬스터가 존재하면 오버킬 대미지 전달
            if next_monster < N:
                # p%의 소숫점 첫째자리 버림
                transferred_damage = math.floor(overkill_damage * p / 100)
                monsters[next_monster] -= transferred_damage

        # 현재 몬스터가 죽었으면 다음 몬스터로 이동
        if monsters[current_monster] <= 0:
            current_monster += 1

    print(turns)

if __name__ == "__main__":
    solve()
