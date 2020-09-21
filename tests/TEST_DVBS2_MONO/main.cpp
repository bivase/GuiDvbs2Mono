#include "stdafx/stdafx.h"
#include <gtest/gtest.h>

namespace fs = std::filesystem;

TEST(test_dvbs2_mono, check_find_synch){
    dvbs2_mono<>::clear();

    dvbs2_mono_idxs_t<> idxs{};
    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 2, 0>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(2,0)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 9, 1>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(9,1)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 8, 2>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(8,2)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 0, 3>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(0,3)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 6, 4>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(6,4)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 186, 5>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(186,5)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 187, 6>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(187,6)});

    dvbs2_mono<>::find_synch(
                dvbs2_mono<>::gen_sig<size_t, 10, 7>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 255)).value(),
                idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(10,7)});
}

TEST(test_dvbs2_mono, check_remove_synch){
    dvbs2_mono<>::clear();

    auto vec_0_0{dvbs2_mono<>::gen_sig<size_t, 0, 0>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono_idxs_t<> idxs{};
    dvbs2_mono<>::find_synch(vec_0_0.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_0_0.value(), idxs);
    ASSERT_EQ(vec_0_0.value().size(), std::count(std::begin(vec_0_0.value()), std::end(vec_0_0.value()), 0));

    auto vec_34_1{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_34_1.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_34_1.value(), idxs);
    ASSERT_EQ(vec_34_1.value().size(), std::count(std::begin(vec_34_1.value()), std::end(vec_34_1.value()), 0));

    auto vec_78_2{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_78_2.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_78_2.value(), idxs);
    ASSERT_EQ(vec_78_2.value().size(), std::count(std::begin(vec_78_2.value()), std::end(vec_78_2.value()), 0));

    auto vec_100_3{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_100_3.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_100_3.value(), idxs);
    ASSERT_EQ(vec_100_3.value().size(), std::count(std::begin(vec_100_3.value()), std::end(vec_100_3.value()), 0));

    auto vec_187_4{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_187_4.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_187_4.value(), idxs);
    ASSERT_EQ(vec_187_4.value().size(), std::count(std::begin(vec_187_4.value()), std::end(vec_187_4.value()), 0));

    auto vec_180_5{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_180_5.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_180_5.value(), idxs);
    ASSERT_EQ(vec_180_5.value().size(), std::count(std::begin(vec_180_5.value()), std::end(vec_180_5.value()), 0));

    auto vec_99_6{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_99_6.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_99_6.value(), idxs);
    ASSERT_EQ(vec_99_6.value().size(), std::count(std::begin(vec_99_6.value()), std::end(vec_99_6.value()), 0));

    auto vec_23_7{dvbs2_mono<>::gen_sig<size_t, 34, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 0))};
    dvbs2_mono<>::find_synch(vec_23_7.value(), idxs);
    dvbs2_mono<>::remove_synch(vec_23_7.value(), idxs);
    ASSERT_EQ(vec_23_7.value().size(), std::count(std::begin(vec_23_7.value()), std::end(vec_23_7.value()), 0));
}

TEST(test_dvbs2_mono, check_get_data){
    dvbs2_mono<>::clear();

    auto vec{dvbs2_mono<>::gen_sig<size_t, 43, 7>(dvbs2_mono_pks_v<> + 1, gen_vec<>(0, 0))};
    std::string test_file{"test_file.bp"};
    std::ofstream dst{test_file, std::ios::binary};
    dst.write(reinterpret_cast<char*>(vec.value().data()), vec.value().size());
    dst.close();

    std::string test_file_out{"test_file_out.bp"};
    dvbs2_mono<>::get_data(test_file, test_file_out);
    std::ifstream src{test_file_out, std::ios::binary};
    std::vector<uint8_t> result(std::filesystem::file_size(test_file_out));
    src.read(reinterpret_cast<char*>(result.data()), result.size());

    ASSERT_EQ(result.size(), std::count(std::begin(result), std::end(result), 0));
    ASSERT_EQ(result.size(), dvbs2_mono_pks_v<> - dvbs2_mono_rows_v<>);
}

TEST(test_dvbs2_mono, check_get_data_dir){
    dvbs2_mono<>::clear();

    auto vec_3_5{dvbs2_mono<>::gen_sig<size_t, 3, 5>(dvbs2_mono_pks_v<> + 40, gen_vec<>(0, 0))};
    auto vec_187_2{dvbs2_mono<>::gen_sig<size_t, 187, 2>(dvbs2_mono_pks_v<> + 12, gen_vec<>(0, 0))};

    std::filesystem::path dir_in{"in"};
    std::filesystem::create_directory(dir_in);
    std::string exe{".bp"};
    std::string idx{"0"};
    std::ofstream dst{dir_in / fs::path{idx + exe}, std::ios::binary};
    dst.write(reinterpret_cast<char*>(vec_3_5.value().data()), vec_3_5.value().size());
    dst.close();

    std::ofstream dst_2{dir_in / fs::path{std::to_string(atoi(idx.data()) + 1) + exe}, std::ios::binary};
    dst_2.write(reinterpret_cast<char*>(vec_187_2.value().data()), vec_187_2.value().size());
    dst_2.close();

    std::filesystem::path dir_out{"out"};
    std::filesystem::create_directory(dir_out);
    dvbs2_mono<>::get_data_dir(dir_in.generic_string(), dir_out.generic_string());

    ASSERT_EQ(fs::file_size(dir_out / "0"), dvbs2_mono_pks_v<> - dvbs2_mono_rows_v<>);
    ASSERT_EQ(fs::file_size(dir_out / "1"), dvbs2_mono_pks_v<> - dvbs2_mono_rows_v<>);
}

TEST(test_dvbs2_mono, check_gen_sig){
    dvbs2_mono<>::clear();

    dvbs2_mono_idxs_t<> idxs{};
    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 34, 0>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(34, 0)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 124, 1>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(124, 1)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 0, 2>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(0, 2)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 187, 3>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(187, 3)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 180, 4>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(180, 4)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 143, 5>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(143, 5)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 100, 6>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(100, 6)});

    dvbs2_mono<>::find_synch(dvbs2_mono<>::gen_sig<size_t, 89, 7>(dvbs2_mono_pks_v<>, gen_vec<>(0, 255)).value(), idxs);
    ASSERT_EQ(idxs, dvbs2_mono_idxs_t<>{std::pair(89, 7)});
}

int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
