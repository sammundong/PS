##멤버들 이름
members = ["고봉훈", "김대로", "김민규", "김민석", "김아영","김예령","김예원","김재원","김지선","김진수","김태우","김형준","박지훈","윤수빈","최범규","최지윤","최진영","고진혁","권의영","김민주","김하진","남택관","민지훈","박정현","사공민","서효진","신혜진","오승연","이승민","이승진","이준원","이태엽","이찬구","이창희","임가겸","유가은","정현진","정소영","조영훈"]

names = input("공백으로 표시: ").split(" ")


filtered_members = [name for name in members if name not in names]


print("누락멤버:", filtered_members)