class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        paired = list(zip(position, speed))
        sorted_paired = sorted(paired,reverse=True)
        times = []
        for pos, spd in sorted_paired :
            time_per_car = (target - pos) / spd
            times.append(time_per_car)
    
        fleet_count = 0
        old_time = 0
        for time in times:
            if old_time < time :
                fleet_count += 1
                old_time = time
        return (fleet_count)