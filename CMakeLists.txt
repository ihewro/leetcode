cmake_minimum_required(VERSION 3.17)
project(leecode VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)


# Process Abseil's CMake build system
#add_subdirectory(abseil-cpp)

#add_executable(hello_world hello_Word.cpp)
#
## Declare dependency on the absl::strings library
#target_link_libraries(hello_world absl::strings)
#target_link_libraries(hello_world absl::synchronization)


add_executable(
        ${PROJECT_NAME}
#        714.cpp
#        746.cpp
#        103.cpp
#        103_2.cpp
#        387.cpp
#        135.cpp
#        205.cpp
#        205_2.cpp
#        test_uint32.cpp
#        testmap.cpp
#        714_2.cpp
#        389.cpp
#        main.cpp
#        547.cpp
        Utils/Util.hpp
        Utils/UF.hpp
#        189.cpp
#        123.cpp
#        123_2.cpp
#        123_3.cpp
#        228.cpp
#        testMap.cpp
#        1202.cpp
#        testlock.cpp
#        testlist.cpp
#        1018.cpp
#        其他/947.cpp
#        104.cpp
#        628.cpp
#        169.cpp
#        221.cpp
#        236.cpp
#        989.cpp
#        17.cpp
#        146.cpp
#        1319.cpp
#        160.cpp
#        461.cpp
#        22.cpp
#        287.cpp
#        674.cpp
#        959.cpp
#        1128.cpp
#        1631.cpp
#        1631_2.cpp
#        724.cpp
#        142.cpp
#        210.cpp
#        207.cpp
#        888.cpp
#        543.cpp
#        70.cpp
#        2.cpp
#        309.cpp
#        101.cpp
#        424.cpp
#        94.cpp
#        其他/399.cpp
#        102.cpp
#        643.cpp
#        20.cpp
#        139.cpp
#        1208_2.cpp
#        1208.cpp
#        1423.cpp
#        回溯/79.cpp
#        155.cpp
#        64.cpp
#        200.cpp
#        31.cpp
#        198.cpp
#        337.cpp
#        438.cpp
#        338.cpp
#        191.cpp
#        3.cpp
#        3_2.cpp
#        5.cpp
#        5_2.cpp
#        其他/300.cpp
#        其他/424_2.cpp
#        其他/139_2.cpp
#        其他/290_2.cpp
#        其他/205_3.cpp
#        其他/146_2.cpp
#        146_3.cpp
#        146_4.cpp
#        300_2.cpp
#        1143.cpp
#        516.cpp
#        21.cpp
#        1288.cpp
#        其他/56.cpp
#        986.cpp
#        116.cpp
#        114.cpp
#        654.cpp
#        105.cpp
#        106.cpp
#        241.cpp
#        435.cpp
#        回溯/2021_3_1_1.cpp
#        排序/17.14.cpp
#        17.14.cpp
#        17.14_3.cpp
#        排序/QSort.cpp
#        排序/215.cpp
#        排序/17.14_qchoice.cpp
#        其他/1539.cpp
#        stl.cpp
#        其他/101_2.cpp
#        其他/236_3.cpp
#        283_2.cpp
#        206.cpp
#        io.cpp
#        496.cpp
#        503.cpp
#        字节/findSeat.cpp
#        字节/virus.cpp
#        字节/switch.cpp
#        阿里/profit.cpp
#        阿里/profit_2.cpp
#        阿里/profit_3.cpp
#        Offer_46.cpp
#        2021_3_1_2.cpp
#        2021_3_1_1.cpp
#        76.cpp
#        424_3.cpp
#        3.cpp
#        test/qsort.cpp 836.cpp
#        115.cpp
#        test/function.cpp
#        test/align.cpp
#        排序/InsertSort.cpp
#        阿里/upadd.cpp
#        392.cpp
#        binary_search.cpp
#        69.cpp
#        153.cpp
#        排序/bubbleSort.cpp
#        排序/selectSort.cpp
#        排序/MergeSort.cpp
#        88.cpp
#        test/test.cpp
#        tencent/1.cpp
#        tencent/1_2.cpp
#        tencent/2.cpp
#        tencent/2_2.cpp
#        tencent/3.cpp
#        test/hash.cpp
#        test/test_.cpp
#        阿里/1.cpp
#        阿里/1_2.cpp
#        阿里/2.cpp
#        offer_58.cpp
#        61.cpp
#        61_2.cpp
#        美团/test_1.cpp
#        美团/test_2.cpp
#        美团/1.cpp
#        美团/2.cpp
#        美团/3.cpp
#        美团/4.cpp
#        美团/5.cpp
#        周赛/5715.cpp
#        周赛/5713.cpp
#        周赛/5714.cpp
#        周赛/5716.cpp
#        test/virtual.cpp
#        test/quote.cpp

#        test/test2.cpp
#        test/friend.cpp
#        百度/1.cpp
#        百度/2.cpp
#        百度/3.cpp
#        设计模式/factory.cpp
#        设计模式/decoration.cpp
#        设计模式/single.cpp
#        testtest.cpp
#        46.cpp
#        test/iterator.cpp
#        47.cpp test/thread.cpp test/asynchronous.cpp
#        设计模式/Observer.cpp
#        124.cpp 225.cpp
#        78.cpp
#        90.cpp
#        25.cpp
#        test/threadlocal.cpp
#        test/const.cpp
#        test/heap.cpp
#        test/heap2.cpp
#        tencent/4.8.cpp
#        微软/demo.cpp
#        微软/3.cpp
#        微软/1.cpp
#        微软/2.cpp
#        83.cpp
#        912.cpp
#        912_merge.cpp
#        15.cpp
#        23.cpp
#        54.cpp
#        148.cpp
#        165.cpp
#        118.cpp
#        93.cpp
#        test/testtest.cpp
#        test/thread2.cpp
#        166.cpp
#        518.cpp
#        343.cpp
#        560.cpp
#        tencent/test.cpp
#        test/912_insert.cpp
#        59.cpp
#        43.cpp
#        tencent/5.7.cpp
#        微软/秋招/3.cpp
#        微软/秋招/2.cpp 微软/秋招/1.cpp
#        华为/1.cpp
#        华为/3.cpp
#        华为/2.cpp
#        743.cpp
#        743_2.cpp
#        483.cpp
#        968.cpp
#        968_2.cpp
        美团/1_1.cpp
#        美团/2_4.cpp
#        美团/2_3.cpp
#        美团/2_2.cpp
)

target_include_directories(
        ${PROJECT_NAME}
        PRIVATE
        Utils
)
# Declare dependency on the absl::strings library
#target_link_libraries(week1 absl::Mutex)