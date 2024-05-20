test_amount = int(input())
for i in range(test_amount):
    no_ad, ad, ad_cost = map(int,input().split())
    ad_net_profit = ad - ad_cost
    if no_ad < ad_net_profit:
        print("advertise")
    elif no_ad == ad_net_profit:
        print("does not matter")
    elif no_ad > ad_net_profit:
        print("do not advertise")
