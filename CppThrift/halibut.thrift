# User define type.
struct Date{
    1: i16 year,
    2: i16 month,
    3: i16 day,
}

# Service Interface, HalibutTracking - Service Name
# 捕鱼计数
service HalibutTracking{
    i32 GetCatchInPoundsToday(),
    i32 GetCatchInPoundsByDate(1: Date d, 2: double t), # Use udt Date as parameter or return type.
}