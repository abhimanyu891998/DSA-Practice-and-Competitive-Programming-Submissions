def run():
    testcases = input()
    testcases = (int)(testcases)

    for case in range(testcases):
        seats_bookings = input()
        seats, bookings = seats_bookings.split()
        seats = int(seats)
        # bookings = input()
        bookings = (int)(bookings)
        booking_made = dict()
        min_seats_assigned = 10000001
        # Li_Ri = []
        minimum = []
        Li_all = [0 for i in range(bookings)]
        Ri_all = [0 for i in range(bookings)]
        for i in range(bookings):
            Li_Ri = input()
            Li, Ri = Li_Ri.split()
            Li = (int)(Li)
            # Ri = input()
            Ri = (int)(Ri)
            # Li_all[i] = Li
            # Ri_all[i]= Ri
            minimum.append((Li, Ri, Ri - Li))
        print(minimum)
        # Li_all = [x for _, x in sorted(
        #     zip(minimum, Li_all), key=lambda pair:pair[0])]
        # Ri_all = [x for _, x in sorted(
        #     zip(minimum, Ri_all), key=lambda pair:pair[0])]
        minimum = sorted(minimum, key = lambda x : x[2])
        for k in range(bookings):
            current_seats_assigned = 0
            Li = minimum[k][0]
            Ri = minimum[k][1]
            # print("using Li, Ri" + str(Li) + str(Ri) )
            for i in range(Li, Ri+1):
                if not i in booking_made:
                    booking_made[i] = 1
                    current_seats_assigned += 1
                    # print("Current seats " + str(current_seats_assigned))
            if min_seats_assigned > current_seats_assigned:
                min_seats_assigned = current_seats_assigned
        print("Case #{}: {}".format(case + 1, min_seats_assigned))

if __name__ == "__main__":
    run()