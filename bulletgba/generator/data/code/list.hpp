#ifndef BARRAGE_LIST_HPP
#define BARRAGE_LIST_HPP
#include "bullet.hpp"

BulletInfo *genBulletFunc_77bd91fc05d311bd06af129c733540bb(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_272b0d198ea7b205b4a666bd3223d449(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_597ca46820b192d2dc82c4d9f6d60588(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_bulletgba[] = { 
genBulletFunc_77bd91fc05d311bd06af129c733540bb, 
genBulletFunc_272b0d198ea7b205b4a666bd3223d449, 
genBulletFunc_597ca46820b192d2dc82c4d9f6d60588, 
}; 

const char * const listBulletNames_bulletgba[] = { 
" 5way", 
" homing_circle", 
" targetself", 
NULL}; 

BulletInfo *genBulletFunc_1bda570cd8d1c4c0ca36849e4863a7e5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6a26c8da25675768f0b386919d84f007(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_fae91ac0b40ddf09295bda3baabb089a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_797b9c7b21326eb9fd4e634c5e67b93a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b92ff6e8fd92711fc57098b9c1e558a3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c11a4d48319851e41b551e753d8ae362(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bb7206d81d7903d0a47b98acd1edb8ab(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_3e6833f584fc2f554ebd83c73675c333(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e88aeb37a2ec76b4a86215c15c013d7e(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9abebc26d6fd2056d1d8771913626cb2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0765916f0e2eb0a5d0fe79981a0eb99e(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_bulletsmorph[] = { 
genBulletFunc_1bda570cd8d1c4c0ca36849e4863a7e5, 
genBulletFunc_6a26c8da25675768f0b386919d84f007, 
genBulletFunc_fae91ac0b40ddf09295bda3baabb089a, 
genBulletFunc_797b9c7b21326eb9fd4e634c5e67b93a, 
genBulletFunc_b92ff6e8fd92711fc57098b9c1e558a3, 
genBulletFunc_c11a4d48319851e41b551e753d8ae362, 
genBulletFunc_bb7206d81d7903d0a47b98acd1edb8ab, 
genBulletFunc_3e6833f584fc2f554ebd83c73675c333, 
genBulletFunc_e88aeb37a2ec76b4a86215c15c013d7e, 
genBulletFunc_9abebc26d6fd2056d1d8771913626cb2, 
genBulletFunc_0765916f0e2eb0a5d0fe79981a0eb99e, 
}; 

const char * const listBulletNames_bulletsmorph[] = { 
" aba_1", 
" aba_2", 
" aba_3", 
" aba_4", 
" aba_5", 
" aba_6", 
" aba_7", 
" convergent", 
" double_seduction", 
" first_bravery", 
" satoru4", 
NULL}; 

BulletInfo *genBulletFunc_0468838b9050b8bd9fe14b26eb831f81(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c9ae505acfe7f186ec59cd89b55366e5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_62ca9eb36d02128afcb62b711ee0fbb4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_37e0094faebf71f6660c09b350d88718(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_476042804bb438a68c1ab24e3485ebe2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f3efb6e747f06b92ddb5fa4b90244f71(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_cae606ab9ef050631961b01b635eaa37(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ac738087b10c2868bf817d627f132fd6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_76bbe49362e4f0ceeb9e1e8cd80b2ce1(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_bwda[] = { 
genBulletFunc_0468838b9050b8bd9fe14b26eb831f81, 
genBulletFunc_c9ae505acfe7f186ec59cd89b55366e5, 
genBulletFunc_62ca9eb36d02128afcb62b711ee0fbb4, 
genBulletFunc_37e0094faebf71f6660c09b350d88718, 
genBulletFunc_476042804bb438a68c1ab24e3485ebe2, 
genBulletFunc_f3efb6e747f06b92ddb5fa4b90244f71, 
genBulletFunc_cae606ab9ef050631961b01b635eaa37, 
genBulletFunc_ac738087b10c2868bf817d627f132fd6, 
genBulletFunc_76bbe49362e4f0ceeb9e1e8cd80b2ce1, 
}; 

const char * const listBulletNames_bwda[] = { 
" bwda01", 
" bwda02", 
" bwda03", 
" bwda05", 
" bwda05b", 
" bwda05b2", 
" bwda05c", 
" bwda06", 
" bwda07", 
NULL}; 

BulletInfo *genBulletFunc_3956f53e0fa8316cb053b080649e6fbd(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_037ac6715ff8960575862144a3673843(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_164d34181c36e7c8bcd92a91a71cbd7b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a86ce4408522a32f3b7a4046af8ac884(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6ebe5233cc30489a397e036982cb9c13(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8c03e1e3ec43eff5090bf4ebc25e17fa(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_424fd3e5cfe23ad2718ee6106d59c04e(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d4cca2db3f5969f7f9cf8c828793e4b4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_605df41862177d37e537d64869a050c9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4f18ab4c5001b3efdd94eec28da922fd(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_92a2ac359e1efd618e11045002c16aa7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_67282d4d149d442e6a0edf83bf861696(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4eef6c4fb2708799d225ec12c376fd76(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4260b08f1d975e2ecf6d7b53b433e45f(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d3a2fd78451f538e1a4219a9bc62bada(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8c7560caedea979a773b43ae014fdd1f(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_736ee9778fcd2412a987f7bee7f859d4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4a42abf9f74c7488f12b1339f6a06035(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b26ebadaebd607f43b5d7cb9bf8a96f5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_85e085ed40538c9632f3921749ee1bba(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6ca6e23ea30d77337f770767a44bb9e1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5e849bb813d033299a87efbd46688c99(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_daiouzyou[] = { 
genBulletFunc_3956f53e0fa8316cb053b080649e6fbd, 
genBulletFunc_037ac6715ff8960575862144a3673843, 
genBulletFunc_164d34181c36e7c8bcd92a91a71cbd7b, 
genBulletFunc_a86ce4408522a32f3b7a4046af8ac884, 
genBulletFunc_6ebe5233cc30489a397e036982cb9c13, 
genBulletFunc_8c03e1e3ec43eff5090bf4ebc25e17fa, 
genBulletFunc_424fd3e5cfe23ad2718ee6106d59c04e, 
genBulletFunc_d4cca2db3f5969f7f9cf8c828793e4b4, 
genBulletFunc_605df41862177d37e537d64869a050c9, 
genBulletFunc_4f18ab4c5001b3efdd94eec28da922fd, 
genBulletFunc_92a2ac359e1efd618e11045002c16aa7, 
genBulletFunc_67282d4d149d442e6a0edf83bf861696, 
genBulletFunc_4eef6c4fb2708799d225ec12c376fd76, 
genBulletFunc_4260b08f1d975e2ecf6d7b53b433e45f, 
genBulletFunc_d3a2fd78451f538e1a4219a9bc62bada, 
genBulletFunc_8c7560caedea979a773b43ae014fdd1f, 
genBulletFunc_736ee9778fcd2412a987f7bee7f859d4, 
genBulletFunc_4a42abf9f74c7488f12b1339f6a06035, 
genBulletFunc_b26ebadaebd607f43b5d7cb9bf8a96f5, 
genBulletFunc_85e085ed40538c9632f3921749ee1bba, 
genBulletFunc_6ca6e23ea30d77337f770767a44bb9e1, 
genBulletFunc_5e849bb813d033299a87efbd46688c99, 
}; 

const char * const listBulletNames_daiouzyou[] = { 
" hibachi_1", 
" hibachi_2", 
" hibachi_3", 
" hibachi_image", 
" hibachi_maybe", 
" round_1_boss", 
" round_1_boss_hakkyou", 
" round_3_boss", 
" round_3_boss_2", 
" round_3_boss_last", 
" round_4_boss", 
" round_4_boss_1", 
" round_4_boss_2", 
" round_4_boss_4", 
" round_4_boss_5", 
" round_5_boss_1", 
" round_5_boss_2", 
" round_6_boss_1", 
" round_6_boss_2", 
" round_6_boss_3", 
" round_6_boss_4", 
" round_6_boss_5", 
NULL}; 

BulletInfo *genBulletFunc_f7a9b9855cc765424ff46045f1067ce5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_03cba78e288f2d088b4dd0f5cd27b013(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_60b92bb1a7ed2bf62c2e679ddd00e52c(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_116f38baa9ed8097d7a4fab09cc20470(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c4e7b258a5e4351c5a9b8ecb8f11a432(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_dodonpachi[] = { 
genBulletFunc_f7a9b9855cc765424ff46045f1067ce5, 
genBulletFunc_03cba78e288f2d088b4dd0f5cd27b013, 
genBulletFunc_60b92bb1a7ed2bf62c2e679ddd00e52c, 
genBulletFunc_116f38baa9ed8097d7a4fab09cc20470, 
genBulletFunc_c4e7b258a5e4351c5a9b8ecb8f11a432, 
}; 

const char * const listBulletNames_dodonpachi[] = { 
" hibachi", 
" kitiku_1", 
" kitiku_2", 
" kitiku_3", 
" kitiku_5", 
NULL}; 

BulletInfo *genBulletFunc_8f7b93bf47cb4786fd13ecbc59d690ac(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_dragonblaze[] = { 
genBulletFunc_8f7b93bf47cb4786fd13ecbc59d690ac, 
}; 

const char * const listBulletNames_dragonblaze[] = { 
" nebyurosu_2", 
NULL}; 

BulletInfo *genBulletFunc_75482cd5c5ee330d8cdd6e875c0df4ef(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5dc962153e1dd4031699367c5510b278(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b156073bbe09da7427b36ac78f3e24d7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_db8e96aa559de2f53dae5738a1a81320(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_2f8ce762a4f0544ddd5536127bb805a1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_677aa18253c9adb831d34fc50120d1e1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e3c76ecdf68606b32af3c663fcff2d83(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_7711b9e645c967c0c9a7b66a9bb949fc(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0d4a29b0f7ee9e714a5883286267b5df(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_esp_galuda_lt[] = { 
genBulletFunc_75482cd5c5ee330d8cdd6e875c0df4ef, 
genBulletFunc_5dc962153e1dd4031699367c5510b278, 
genBulletFunc_b156073bbe09da7427b36ac78f3e24d7, 
genBulletFunc_db8e96aa559de2f53dae5738a1a81320, 
genBulletFunc_2f8ce762a4f0544ddd5536127bb805a1, 
genBulletFunc_677aa18253c9adb831d34fc50120d1e1, 
genBulletFunc_e3c76ecdf68606b32af3c663fcff2d83, 
genBulletFunc_7711b9e645c967c0c9a7b66a9bb949fc, 
genBulletFunc_0d4a29b0f7ee9e714a5883286267b5df, 
}; 

const char * const listBulletNames_esp_galuda_lt[] = { 
" esp_galuda_lt_stage1_boss_1", 
" esp_galuda_lt_stage1_boss_kurae", 
" esp_galuda_lt_stage2_boss_1", 
" esp_galuda_lt_stage2_middle_boss_4fan", 
" esp_galuda_lt_stage2_middle_boss_easy", 
" esp_galuda_lt_stage3_boss_arm", 
" esp_galuda_lt_stage3_middle_boss_easy", 
" esp_galuda_lt_stage3_middle_boss_lid", 
" esp_galuda_lt_stage4_middle_boss_2fan", 
NULL}; 

BulletInfo *genBulletFunc_442c9d9cab13b78dc9d55e85af749734(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a2d08d72e91d474270192dece4a736ba(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5ecb76d069db4398d4003a1a9694fc3a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4a6493fa3cb4851af1c5f0c2dce63c78(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_cbb23e14dba06cf7971eafe9d084f9d0(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4230f8cdb144a840367f5c7e948669f1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0c211e6a4fbff90fc60550910633247a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9bb0009f7447189a039fec38c81da833(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ec7c2e515d0e13ebd609e51678e069b7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_caf7460bfa652a55c9064d6c984ac6d6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_67f0b37d4fb0c61abc248c39c6bb7ba8(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9b958f380c772f3c2629fd1009c26efa(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_esp_rade[] = { 
genBulletFunc_442c9d9cab13b78dc9d55e85af749734, 
genBulletFunc_a2d08d72e91d474270192dece4a736ba, 
genBulletFunc_5ecb76d069db4398d4003a1a9694fc3a, 
genBulletFunc_4a6493fa3cb4851af1c5f0c2dce63c78, 
genBulletFunc_cbb23e14dba06cf7971eafe9d084f9d0, 
genBulletFunc_4230f8cdb144a840367f5c7e948669f1, 
genBulletFunc_0c211e6a4fbff90fc60550910633247a, 
genBulletFunc_9bb0009f7447189a039fec38c81da833, 
genBulletFunc_ec7c2e515d0e13ebd609e51678e069b7, 
genBulletFunc_caf7460bfa652a55c9064d6c984ac6d6, 
genBulletFunc_67f0b37d4fb0c61abc248c39c6bb7ba8, 
genBulletFunc_9b958f380c772f3c2629fd1009c26efa, 
}; 

const char * const listBulletNames_esp_rade[] = { 
" round_123_boss_izuna_hakkyou", 
" round_123_boss_pelaboy_hakkyou", 
" round_123_boss_satoru_5way", 
" round_5_alice_clone", 
" round_5_boss_ares_2", 
" round_5_boss_gara_1_a", 
" round_5_boss_gara_1_b", 
" round_5_boss_gara_2", 
" round_5_boss_gara_3", 
" round_5_boss_gara_4", 
" round_5_boss_gara_5", 
" round_5_boss_kakusi_hakkyou", 
NULL}; 

BulletInfo *genBulletFunc_204644cf607b15f143fea50b0670dfb6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_11ea6628dce26c8dad79900598d6c6b7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e1944709f3477029448f8cf5c3142dac(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b0e527952bf6adbbed0ece652d2de718(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9ef048954db14033ff500b595acd6671(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_g_wange[] = { 
genBulletFunc_204644cf607b15f143fea50b0670dfb6, 
genBulletFunc_11ea6628dce26c8dad79900598d6c6b7, 
genBulletFunc_e1944709f3477029448f8cf5c3142dac, 
genBulletFunc_b0e527952bf6adbbed0ece652d2de718, 
genBulletFunc_9ef048954db14033ff500b595acd6671, 
}; 

const char * const listBulletNames_g_wange[] = { 
" g_wange_hi_ishi_1", 
" g_wange_hi_ishi_3", 
" g_wange_hi_ishi_4", 
" roll_gara", 
" round_trip_bit", 
NULL}; 

BulletInfo *genBulletFunc_d7c96f9e6f3756a14ba84b4590edc27b(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_g_darius[] = { 
genBulletFunc_d7c96f9e6f3756a14ba84b4590edc27b, 
}; 

const char * const listBulletNames_g_darius[] = { 
" homing_laser", 
NULL}; 

BulletInfo *genBulletFunc_02e10ec6978b2a27ab619e02f878cb38(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_garegga[] = { 
genBulletFunc_02e10ec6978b2a27ab619e02f878cb38, 
}; 

const char * const listBulletNames_garegga[] = { 
" black_heart_mk2_winder", 
NULL}; 

BulletInfo *genBulletFunc_d066008cc344cbd1f5d559c45fe5ac8d(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_gigawing2[] = { 
genBulletFunc_d066008cc344cbd1f5d559c45fe5ac8d, 
}; 

const char * const listBulletNames_gigawing2[] = { 
" akurimi", 
NULL}; 

BulletInfo *genBulletFunc_201c5552a525b33f5572c222ab90376a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_575b5e5013b45c4bd3c909812d67ddd9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e65738041784a5e4056447e17e793a52(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_guwange[] = { 
genBulletFunc_201c5552a525b33f5572c222ab90376a, 
genBulletFunc_575b5e5013b45c4bd3c909812d67ddd9, 
genBulletFunc_e65738041784a5e4056447e17e793a52, 
}; 

const char * const listBulletNames_guwange[] = { 
" round_2_boss_circle_fire", 
" round_3_boss_fast_3way", 
" round_4_boss_eye_ball", 
NULL}; 

BulletInfo *genBulletFunc_4c523665869a876947956ad05248b278(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9b58a0674de6bc4b8a3ae25e6cd97ffb(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e146e29383e9d303669e08d06125374a(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_ketui_lt[] = { 
genBulletFunc_4c523665869a876947956ad05248b278, 
genBulletFunc_9b58a0674de6bc4b8a3ae25e6cd97ffb, 
genBulletFunc_e146e29383e9d303669e08d06125374a, 
}; 

const char * const listBulletNames_ketui_lt[] = { 
" 2boss_winder_crash", 
" 3boss_kunekune", 
" 3boss_roll_and_aim", 
NULL}; 

BulletInfo *genBulletFunc_6dfd0e0d2b04618ffe2fdb6da6d4df76(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_be8de7ebfa5573937b659bbc90286ed5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6fc23e00f21b932af8d16becde354c9a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e0fd40dd58a27e46c544084387d5f1cf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_28c68ae1b3ad542abe688249cbc41e65(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_51e11f19404e87155e9a890d8284e402(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c51998a9446860818c4c78a406bd9b23(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e66975fd8c5d22625d6b85355b0e95bf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_518406dbcb2bfc9ca5f9cf79816fa404(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_827fbfaef7fbe35d7558c2e7767e1c18(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8bed3cc8abb149492cd6890ecbb2d556(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_545bcb6b38e99289a001a1174661c770(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_eaa63e6553e0c2e4e6259245abf8cdd4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a36386a520e010ff9ce3ebf87cefcecc(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c6f591636ff777755f479010df3beaeb(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_52007b5aa44ec0975004ccb74a8526e0(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f44bd484d2ea4d65de4d06148314c542(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1c73ff446054c3a6e87b62bce10152e8(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bfbd19c98ef9e3acff1fd554defe8863(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_334a6db81fba40cde3b3181cbba521cc(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_7edb237d0b090b1597e68bcc11c8376a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_815f04c6e7c16510dee2e20568d79164(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_db807b2a7d8827b6140f55eb64d28bc5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a078b8418514450739e72609c9a273d4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4a6532edfe7d0a7f0afe67cd3d4b2d11(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_dcd6df7bf28f1e5fc90a46a17c16a023(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d66b2dfd97443d7881cd41327638670d(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6b9c6bd7afed59fb5da646a59bf864d9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ad0726cecbdee4543ad9c5ce88683945(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b31da9eec102fa80a3eebd847d7c8af9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e9c5251663b26b8b849de773f3f9b7a0(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_43ce1400d9175d733d3d38f51328b0e6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_2ef66bd680fba6b33bc8e764c3cc055b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_90a92c9a1964555ba9194cc82705f3fd(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_fa29ec069fb59574a66ac31b5eb7689c(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e155d5d1ea2c8ae30d36b8e619a47085(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0991fcb6d51c8643a6ec46c4d101fb55(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_767b7ffa69cccf84971238e9d35d2574(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_kotuanzenx[] = { 
genBulletFunc_6dfd0e0d2b04618ffe2fdb6da6d4df76, 
genBulletFunc_be8de7ebfa5573937b659bbc90286ed5, 
genBulletFunc_6fc23e00f21b932af8d16becde354c9a, 
genBulletFunc_e0fd40dd58a27e46c544084387d5f1cf, 
genBulletFunc_28c68ae1b3ad542abe688249cbc41e65, 
genBulletFunc_51e11f19404e87155e9a890d8284e402, 
genBulletFunc_c51998a9446860818c4c78a406bd9b23, 
genBulletFunc_e66975fd8c5d22625d6b85355b0e95bf, 
genBulletFunc_518406dbcb2bfc9ca5f9cf79816fa404, 
genBulletFunc_827fbfaef7fbe35d7558c2e7767e1c18, 
genBulletFunc_8bed3cc8abb149492cd6890ecbb2d556, 
genBulletFunc_545bcb6b38e99289a001a1174661c770, 
genBulletFunc_eaa63e6553e0c2e4e6259245abf8cdd4, 
genBulletFunc_a36386a520e010ff9ce3ebf87cefcecc, 
genBulletFunc_c6f591636ff777755f479010df3beaeb, 
genBulletFunc_52007b5aa44ec0975004ccb74a8526e0, 
genBulletFunc_f44bd484d2ea4d65de4d06148314c542, 
genBulletFunc_1c73ff446054c3a6e87b62bce10152e8, 
genBulletFunc_bfbd19c98ef9e3acff1fd554defe8863, 
genBulletFunc_334a6db81fba40cde3b3181cbba521cc, 
genBulletFunc_7edb237d0b090b1597e68bcc11c8376a, 
genBulletFunc_815f04c6e7c16510dee2e20568d79164, 
genBulletFunc_db807b2a7d8827b6140f55eb64d28bc5, 
genBulletFunc_a078b8418514450739e72609c9a273d4, 
genBulletFunc_4a6532edfe7d0a7f0afe67cd3d4b2d11, 
genBulletFunc_dcd6df7bf28f1e5fc90a46a17c16a023, 
genBulletFunc_d66b2dfd97443d7881cd41327638670d, 
genBulletFunc_6b9c6bd7afed59fb5da646a59bf864d9, 
genBulletFunc_ad0726cecbdee4543ad9c5ce88683945, 
genBulletFunc_b31da9eec102fa80a3eebd847d7c8af9, 
genBulletFunc_e9c5251663b26b8b849de773f3f9b7a0, 
genBulletFunc_43ce1400d9175d733d3d38f51328b0e6, 
genBulletFunc_2ef66bd680fba6b33bc8e764c3cc055b, 
genBulletFunc_90a92c9a1964555ba9194cc82705f3fd, 
genBulletFunc_fa29ec069fb59574a66ac31b5eb7689c, 
genBulletFunc_e155d5d1ea2c8ae30d36b8e619a47085, 
genBulletFunc_0991fcb6d51c8643a6ec46c4d101fb55, 
genBulletFunc_767b7ffa69cccf84971238e9d35d2574, 
}; 

const char * const listBulletNames_kotuanzenx[] = { 
" bb04-r7", 
" bb05-bomb", 
" bb06-ohgi", 
" bb07-las1", 
" bb08-las1+", 
" bb09-ohka", 
" bb10-doublebody", 
" bb11-sp", 
" tsx-bx1-seahorse", 
" tsx-bx1h-seahorse2", 
" tsx-bx2-mine", 
" tsx_aka-kasuri", 
" tsx_awtt", 
" tsx_cinshot", 
" tsx_d_wave", 
" tsx_evac01", 
" tsx_evac02", 
" tsx_evac07", 
" tsx_gedo", 
" tsx_hx", 
" tsx_kiero", 
" tsx_kohaku_first", 
" tsx_mimir", 
" tsx_musi4boss", 
" tsx_proto01", 
" tsx_proto02", 
" tsx_proto03", 
" tsx_proto04", 
" tsx_proto05", 
" tsx_proto06", 
" tsx_proto11", 
" tsx_rand", 
" tsx_sanada", 
" tsx_seseribaz", 
" tsx_spin", 
" tsx_thtt", 
" tsx_wh", 
" tsx_x1", 
NULL}; 

BulletInfo *genBulletFunc_c091ac21e42e57b171f8fb57473f2baa(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b262ba0fc09f2b57689513c71ea83398(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8585b45d8b9bcfbaa0615f2d0b578614(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b9f6ac0fadba820201e21b8fdea1f360(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_66a6105556800f2952d4f34a118d29d3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_cde0b7cc887a166fbf575015af7d8fff(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_42b3a7a040e9380f960eb10c2df20b38(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_756b47eb855b0b98ce83a85b6690af43(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_3aec0c6319d08dd7b5f8c41504a17a69(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1fcee8933d5a51dc66310be45b41b775(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c70891d3119e6e368be85af7e73a8f09(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0025924d7de957bd5fad4aa4d983379b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1b2ec0aa73198b27051ebabe4ada6d8b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_92234611b10009abd10aaff2c0a2fc0d(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6cf6efbcf03f56f3faf41c6424d88004(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a3f7caacd2b70b74bcf12379289fdceb(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d2fe6c6bea81987b346f01efe1ca03cf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_13059ffe7967083e26af17f55d6ef0d2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6f1e3a35fd6ae168e14297335ead8d15(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_468da23b29c09298918a6224a30199af(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_41bb405c27f509ad7c9e308c5f52f7f8(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_cc30176beb96f593a7d8a17495949ed4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0f99567618f60cc0b85490e02087f21a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_79d2f7580d1035678c30a2153cfd37cf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1d488413464bde8778c4446dec3d2c53(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e66798cfbf690cb56564d01c1a2988be(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_38130d6a37475ee9da0e7448b105d123(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1d64cc15a4d1d24008e0e1bff2c10dff(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_706ca5ba448427f84df5db156c95dd20(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_mda[] = { 
genBulletFunc_c091ac21e42e57b171f8fb57473f2baa, 
genBulletFunc_b262ba0fc09f2b57689513c71ea83398, 
genBulletFunc_8585b45d8b9bcfbaa0615f2d0b578614, 
genBulletFunc_b9f6ac0fadba820201e21b8fdea1f360, 
genBulletFunc_66a6105556800f2952d4f34a118d29d3, 
genBulletFunc_cde0b7cc887a166fbf575015af7d8fff, 
genBulletFunc_42b3a7a040e9380f960eb10c2df20b38, 
genBulletFunc_756b47eb855b0b98ce83a85b6690af43, 
genBulletFunc_3aec0c6319d08dd7b5f8c41504a17a69, 
genBulletFunc_1fcee8933d5a51dc66310be45b41b775, 
genBulletFunc_c70891d3119e6e368be85af7e73a8f09, 
genBulletFunc_0025924d7de957bd5fad4aa4d983379b, 
genBulletFunc_1b2ec0aa73198b27051ebabe4ada6d8b, 
genBulletFunc_92234611b10009abd10aaff2c0a2fc0d, 
genBulletFunc_6cf6efbcf03f56f3faf41c6424d88004, 
genBulletFunc_a3f7caacd2b70b74bcf12379289fdceb, 
genBulletFunc_d2fe6c6bea81987b346f01efe1ca03cf, 
genBulletFunc_13059ffe7967083e26af17f55d6ef0d2, 
genBulletFunc_6f1e3a35fd6ae168e14297335ead8d15, 
genBulletFunc_468da23b29c09298918a6224a30199af, 
genBulletFunc_41bb405c27f509ad7c9e308c5f52f7f8, 
genBulletFunc_cc30176beb96f593a7d8a17495949ed4, 
genBulletFunc_0f99567618f60cc0b85490e02087f21a, 
genBulletFunc_79d2f7580d1035678c30a2153cfd37cf, 
genBulletFunc_1d488413464bde8778c4446dec3d2c53, 
genBulletFunc_e66798cfbf690cb56564d01c1a2988be, 
genBulletFunc_38130d6a37475ee9da0e7448b105d123, 
genBulletFunc_1d64cc15a4d1d24008e0e1bff2c10dff, 
genBulletFunc_706ca5ba448427f84df5db156c95dd20, 
}; 

const char * const listBulletNames_mda[] = { 
" 10flower_2", 
" 14b_2-3w", 
" 2f", 
" acc_n_dec", 
" circular", 
" circular_model", 
" circular_sun", 
" double_w", 
" fukuro", 
" gnnnyari", 
" gnnnyari_a", 
" mda_179-10", 
" mda_fasa", 
" mda_gnnny_2xa", 
" mda_gnnny_2xb", 
" mda_gnnny_3c", 
" mda_n-b-2", 
" mda_n-b", 
" mda_nejiri", 
" mda_potduet", 
" mda_r106-7", 
" mda_scales9", 
" mda_time_a", 
" mda_time_b", 
" mda_uneune", 
" mojya", 
" mossari", 
" wheel_30", 
" wind_cl", 
NULL}; 

BulletInfo *genBulletFunc_7f9a567c3018d52c28ddc4637deab280(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_misc[] = { 
genBulletFunc_7f9a567c3018d52c28ddc4637deab280, 
}; 

const char * const listBulletNames_misc[] = { 
" border_down_6a_boss_x_explosion", 
NULL}; 

BulletInfo *genBulletFunc_b9bf61c4a4d8b437b46daea7e4931a46(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_21f80fcb428125508037cdf700ebb7a0(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ecbefa5c71a8ca18ad630af809f19a4c(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_29b2584d9447bc18fae202294258433f(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_noiz2sa[] = { 
genBulletFunc_b9bf61c4a4d8b437b46daea7e4931a46, 
genBulletFunc_21f80fcb428125508037cdf700ebb7a0, 
genBulletFunc_ecbefa5c71a8ca18ad630af809f19a4c, 
genBulletFunc_29b2584d9447bc18fae202294258433f, 
}; 

const char * const listBulletNames_noiz2sa[] = { 
" 5_players", 
" 88way", 
" bit", 
" rollbar", 
NULL}; 

BulletInfo *genBulletFunc_fee3a411f051078318c1ff758e4fcc00(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_229efab615303af1df6e7f43c3465c78(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1d275fb94a60864e130db2bf763cd0c0(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_af507f9e5788c84ed796ba260a7033a7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_aa5aec584718635a4c07911f6eee1eef(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_2f44363779bbde49020c8a4c26dbfeb7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_af37ed9e6d4bfde656b9094cf5b629f7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_61eed4e539b29d7b20866c7c61521a77(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8d84a393f0a201f54e2d94962ff66063(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bc255c3c7a6bc189b3b3389f2e941b59(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b549af695ecfe686be66b6a34fac0343(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f365102a388a5cee8af0d4efe9ae978e(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9d4fedc5c020829d0fee0d1489435037(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_47c2f2c7229716518a96efa7a9d1bb99(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_oohara[] = { 
genBulletFunc_fee3a411f051078318c1ff758e4fcc00, 
genBulletFunc_229efab615303af1df6e7f43c3465c78, 
genBulletFunc_1d275fb94a60864e130db2bf763cd0c0, 
genBulletFunc_af507f9e5788c84ed796ba260a7033a7, 
genBulletFunc_aa5aec584718635a4c07911f6eee1eef, 
genBulletFunc_2f44363779bbde49020c8a4c26dbfeb7, 
genBulletFunc_af37ed9e6d4bfde656b9094cf5b629f7, 
genBulletFunc_61eed4e539b29d7b20866c7c61521a77, 
genBulletFunc_8d84a393f0a201f54e2d94962ff66063, 
genBulletFunc_bc255c3c7a6bc189b3b3389f2e941b59, 
genBulletFunc_b549af695ecfe686be66b6a34fac0343, 
genBulletFunc_f365102a388a5cee8af0d4efe9ae978e, 
genBulletFunc_9d4fedc5c020829d0fee0d1489435037, 
genBulletFunc_47c2f2c7229716518a96efa7a9d1bb99, 
}; 

const char * const listBulletNames_oohara[] = { 
" a", 
" celestial_thought", 
" cheeky_nway", 
" cutting_edge_of_notion", 
" first_class_nway", 
" flat_nway", 
" green_thought", 
" innovation_nway", 
" my_boom", 
" nopida_crying_dance", 
" recommended_nway", 
" stockholders_meeting_1", 
" stockholders_meeting_3", 
" the_43rd_sunset", 
NULL}; 

BulletInfo *genBulletFunc_6ac93d62845a0ebb7f3693e5242c010d(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b595ab6d9c63368d49bfdb6468b63e25(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b293845e965647dfe110f973c5784aea(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_46889b5eae75519a61316049dec823e6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_fb0b2b3ec821e86c20cc37cd917e018a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c885a6309ede13b69e83e796f8207b92(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_127421bccc2011cafdb69846fe0e1066(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5bd493853bb9ce57f61b957eaecfc24e(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4d79c3994bba44975e303a14bc59dcd1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bf84115d0f8a4d590154986426621409(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e62a315230be831eea9aa41210b81b9a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_af36ed80105eba91925b9aa57d1efb18(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a86f7e1e82d4467f5c0ac24b35488895(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a12d727ed87afb93e1a2d5f9265ca49f(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_13fd847d9a7f217f37e5ecad14303649(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_3528e8f234f007f59f5a71e955c85626(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_cddda9c59a580ab9f99a148cce3b64b5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_93025a4feb13cca4988065d9ceb66e6f(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6dfe9379928bc6be1fa04f9b0a29d671(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f280d6654214a773e1657bb25d722e10(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5b1087b54e945b7a106971fe26cdf7fa(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_7fca19134357f27c98bcc894738c95f7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c55fca100688bdfdd227c7177cb69aa2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e2ab9de23373879743a8eae4ebe89299(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_555a54177131cc9086be0e17bb4256b6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0e0afa24ea92bd15e978add0e0366bda(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_049ef48420d09cb7180be7de6c90b0ae(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_91e1d6980505568c7b303534da193cb5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_fde4f86df884c11f4831e07d2347a971(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_01c6526a615bad8394fb7d670e44b82c(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1e113a5307ee962a7ed0489d2e6d31f8(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_2fd42ac94005c4138633a4f69aa82e70(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_30225ee2fe18bcacc3d22cb61d5131ca(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8e434a11503a22d1ef27350c862bf5fb(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_13502a3a88c363b210c8c82286210240(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_18cd93b4338b3cb63de18d6922b5a833(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_525eeec5d206b607aa7162121d984ed9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e2ad9a4a6305548b843b381994d02d98(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1f791c16ab88181e58b563da25f9ea1e(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_3e0633063499fdad4b8ed6a3f9f8e880(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d4e81e8f23beabab813453550ce920e2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_55b84906ea0745c07c7e3fba7d1d4c67(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_da64b9c29813a3729c51828b0d55f873(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_7f36cff55dd3774fd9926fbcc50a1676(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_fb01f8b09ccca05988dac5a41efd182d(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bd8d96d47518ff30b748a323d8e8dd4b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_57a2186987a35489c9b695c4eeabb8f2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_75b816a19bdda20382237025d51b1db3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c15cca6001b2912737f879bdf6b0203b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5434ccb5e85cb203e582309da25f2625(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f1edbf31a233fc0b0674eaa1e2fd7539(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_947e8aa6ad8a209afce8afda417721cf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_989ff2b8b35015e96861a32f95d1584b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4b77bce2d9e8a44c65a58971f9090bb3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b2cb92233725e14d87167ead868dbcc1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_639bec4959b21eafc51bf9d3e7c143c2(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bd75599e1e81b7365d0072f752337063(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_372d9cc882c66dedeb9183c8758ae427(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ca560b37fcfd158af23358e52eeb34ed(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1e652fb9bc80ab562f941eacca293725(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_original[] = { 
genBulletFunc_6ac93d62845a0ebb7f3693e5242c010d, 
genBulletFunc_b595ab6d9c63368d49bfdb6468b63e25, 
genBulletFunc_b293845e965647dfe110f973c5784aea, 
genBulletFunc_46889b5eae75519a61316049dec823e6, 
genBulletFunc_fb0b2b3ec821e86c20cc37cd917e018a, 
genBulletFunc_c885a6309ede13b69e83e796f8207b92, 
genBulletFunc_127421bccc2011cafdb69846fe0e1066, 
genBulletFunc_5bd493853bb9ce57f61b957eaecfc24e, 
genBulletFunc_4d79c3994bba44975e303a14bc59dcd1, 
genBulletFunc_bf84115d0f8a4d590154986426621409, 
genBulletFunc_e62a315230be831eea9aa41210b81b9a, 
genBulletFunc_af36ed80105eba91925b9aa57d1efb18, 
genBulletFunc_a86f7e1e82d4467f5c0ac24b35488895, 
genBulletFunc_a12d727ed87afb93e1a2d5f9265ca49f, 
genBulletFunc_13fd847d9a7f217f37e5ecad14303649, 
genBulletFunc_3528e8f234f007f59f5a71e955c85626, 
genBulletFunc_cddda9c59a580ab9f99a148cce3b64b5, 
genBulletFunc_93025a4feb13cca4988065d9ceb66e6f, 
genBulletFunc_6dfe9379928bc6be1fa04f9b0a29d671, 
genBulletFunc_f280d6654214a773e1657bb25d722e10, 
genBulletFunc_5b1087b54e945b7a106971fe26cdf7fa, 
genBulletFunc_7fca19134357f27c98bcc894738c95f7, 
genBulletFunc_c55fca100688bdfdd227c7177cb69aa2, 
genBulletFunc_e2ab9de23373879743a8eae4ebe89299, 
genBulletFunc_555a54177131cc9086be0e17bb4256b6, 
genBulletFunc_0e0afa24ea92bd15e978add0e0366bda, 
genBulletFunc_049ef48420d09cb7180be7de6c90b0ae, 
genBulletFunc_91e1d6980505568c7b303534da193cb5, 
genBulletFunc_fde4f86df884c11f4831e07d2347a971, 
genBulletFunc_01c6526a615bad8394fb7d670e44b82c, 
genBulletFunc_1e113a5307ee962a7ed0489d2e6d31f8, 
genBulletFunc_2fd42ac94005c4138633a4f69aa82e70, 
genBulletFunc_30225ee2fe18bcacc3d22cb61d5131ca, 
genBulletFunc_8e434a11503a22d1ef27350c862bf5fb, 
genBulletFunc_13502a3a88c363b210c8c82286210240, 
genBulletFunc_18cd93b4338b3cb63de18d6922b5a833, 
genBulletFunc_525eeec5d206b607aa7162121d984ed9, 
genBulletFunc_e2ad9a4a6305548b843b381994d02d98, 
genBulletFunc_1f791c16ab88181e58b563da25f9ea1e, 
genBulletFunc_3e0633063499fdad4b8ed6a3f9f8e880, 
genBulletFunc_d4e81e8f23beabab813453550ce920e2, 
genBulletFunc_55b84906ea0745c07c7e3fba7d1d4c67, 
genBulletFunc_da64b9c29813a3729c51828b0d55f873, 
genBulletFunc_7f36cff55dd3774fd9926fbcc50a1676, 
genBulletFunc_fb01f8b09ccca05988dac5a41efd182d, 
genBulletFunc_bd8d96d47518ff30b748a323d8e8dd4b, 
genBulletFunc_57a2186987a35489c9b695c4eeabb8f2, 
genBulletFunc_75b816a19bdda20382237025d51b1db3, 
genBulletFunc_c15cca6001b2912737f879bdf6b0203b, 
genBulletFunc_5434ccb5e85cb203e582309da25f2625, 
genBulletFunc_f1edbf31a233fc0b0674eaa1e2fd7539, 
genBulletFunc_947e8aa6ad8a209afce8afda417721cf, 
genBulletFunc_989ff2b8b35015e96861a32f95d1584b, 
genBulletFunc_4b77bce2d9e8a44c65a58971f9090bb3, 
genBulletFunc_b2cb92233725e14d87167ead868dbcc1, 
genBulletFunc_639bec4959b21eafc51bf9d3e7c143c2, 
genBulletFunc_bd75599e1e81b7365d0072f752337063, 
genBulletFunc_372d9cc882c66dedeb9183c8758ae427, 
genBulletFunc_ca560b37fcfd158af23358e52eeb34ed, 
genBulletFunc_1e652fb9bc80ab562f941eacca293725, 
}; 

const char * const listBulletNames_original[] = { 
" accusation", 
" air_elemental", 
" aja3", 
" backfire", 
" balloon_bomb", 
" btb_1", 
" btb_2", 
" btb_3", 
" btb_4", 
" btb_5", 
" btb_6", 
" censored", 
" chimera", 
" circle", 
" dandecrazy", 
" dokkaan", 
" ellipse_bomb", 
" entangled_space", 
" eternal", 
" evil_eye", 
" extinction", 
" fujin_ranbu_fake", 
" fujin_ranbu_true", 
" guruguru", 
" gurutyo", 
" gyakuhunsya", 
" hajike", 
" hasami", 
" hirahira", 
" housya", 
" iciclenorm", 
" kagome", 
" kedama", 
" knight_1", 
" knight_2", 
" knight_3", 
" knight_4", 
" kokusi", 
" kotai", 
" kujira", 
" nbird", 
" oogi_hutatsu", 
" optic_seeker", 
" pan", 
" progear_cheap_fake", 
" sakuretudan", 
" senkosinen", 
" shooting_star", 
" sikigami5boss2", 
" spidercat", 
" star_in_the_sky", 
" stone6", 
" time_twist", 
" tsunami", 
" two_cross", 
" uneri", 
" unilateral", 
" wana", 
" water_max", 
" zako_atack", 
NULL}; 

BulletInfo *genBulletFunc_9e5b3e15743083d4981ded479d9b2861(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_83646d6a3ccb0f54c5b0f0497a84bbef(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_eaaef1524a4d0454cb466138088088cb(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8505912543723cf8436c8d4aaf231af6(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b755698b316e2f263d6cda40e3f7d9e3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f774ee337ce71ccf6b9a44f78b542d22(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_25bf3ae40c24f5791394ad3327d349fc(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_0f18cc8990778eabc886ac04ef058de3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_70251bd4446dbba829c96b6b074c1ff4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_956d1968ce5790a628a53a546963b45c(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_85caa51d62fd12eba8078cff08a51e30(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_02caaef8581d25f15eb33c8d9e9bb24b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_afd6dd9eedc1e44b876fd570a9146508(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_2c8f83ae91b1cc2a9dfc4e50d2b00800(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_3069ddb1fa3b4f38c2137b472f101ed9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_83e852499ef995eb9f25491a4685a500(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_24ce77a114c31be13efdc39029d9313c(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_194690eb72fe93ba33f5bfb06d288fa5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bc2040b4edc291f3d17b547048b6ef88(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e3525aae07232461de98124f7db7746b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ec5d45217468d993360701dd13e20d25(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d71264b76755bf6859ed2e8003714e02(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1b6137eed5530192f8f52041dce2b077(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_7e0e3af94d031c01809f039280d875a4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_7db86d6aeaaadf4ef22a30135e96908f(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_efd829ced0c0774cf4ed358403f274ef(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_05369e965d52b59d58f87bf137692d7a(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_189b0aa8827c1000588ab2a315028838(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e088d32ba1ee080dc0d1ac4cebb07962(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5ece8c912f908c120aea0c2feebbce64(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_504166635e287f516f74ff2e24729c16(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_ddfa62da7cb2e641a5c51edb08873ba6(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_otakutwo[] = { 
genBulletFunc_9e5b3e15743083d4981ded479d9b2861, 
genBulletFunc_83646d6a3ccb0f54c5b0f0497a84bbef, 
genBulletFunc_eaaef1524a4d0454cb466138088088cb, 
genBulletFunc_8505912543723cf8436c8d4aaf231af6, 
genBulletFunc_b755698b316e2f263d6cda40e3f7d9e3, 
genBulletFunc_f774ee337ce71ccf6b9a44f78b542d22, 
genBulletFunc_25bf3ae40c24f5791394ad3327d349fc, 
genBulletFunc_0f18cc8990778eabc886ac04ef058de3, 
genBulletFunc_70251bd4446dbba829c96b6b074c1ff4, 
genBulletFunc_956d1968ce5790a628a53a546963b45c, 
genBulletFunc_85caa51d62fd12eba8078cff08a51e30, 
genBulletFunc_02caaef8581d25f15eb33c8d9e9bb24b, 
genBulletFunc_afd6dd9eedc1e44b876fd570a9146508, 
genBulletFunc_2c8f83ae91b1cc2a9dfc4e50d2b00800, 
genBulletFunc_3069ddb1fa3b4f38c2137b472f101ed9, 
genBulletFunc_83e852499ef995eb9f25491a4685a500, 
genBulletFunc_24ce77a114c31be13efdc39029d9313c, 
genBulletFunc_194690eb72fe93ba33f5bfb06d288fa5, 
genBulletFunc_bc2040b4edc291f3d17b547048b6ef88, 
genBulletFunc_e3525aae07232461de98124f7db7746b, 
genBulletFunc_ec5d45217468d993360701dd13e20d25, 
genBulletFunc_d71264b76755bf6859ed2e8003714e02, 
genBulletFunc_1b6137eed5530192f8f52041dce2b077, 
genBulletFunc_7e0e3af94d031c01809f039280d875a4, 
genBulletFunc_7db86d6aeaaadf4ef22a30135e96908f, 
genBulletFunc_efd829ced0c0774cf4ed358403f274ef, 
genBulletFunc_05369e965d52b59d58f87bf137692d7a, 
genBulletFunc_189b0aa8827c1000588ab2a315028838, 
genBulletFunc_e088d32ba1ee080dc0d1ac4cebb07962, 
genBulletFunc_5ece8c912f908c120aea0c2feebbce64, 
genBulletFunc_504166635e287f516f74ff2e24729c16, 
genBulletFunc_ddfa62da7cb2e641a5c51edb08873ba6, 
}; 

const char * const listBulletNames_otakutwo[] = { 
" circle_fireworks", 
" circle_fireworks2", 
" circle_roll", 
" circle_trap", 
" dis_bee_1", 
" dis_bee_2", 
" dis_bee_hakkyou", 
" mushihime_ultra5midboss", 
" otk2-doom", 
" otk2-forgotten1", 
" otk2-hanabi", 
" otk2-hidden", 
" restriction_stasis", 
" roll_misago", 
" self-0012", 
" self-0034", 
" self-0036", 
" self-0062", 
" self-0063", 
" self-0071", 
" self-1010", 
" self-1011", 
" self-1020", 
" self-1021", 
" self-1022", 
" self-2010", 
" self-2011", 
" self-2020", 
" self-3020", 
" self-3021", 
" self-mis02", 
" slow_move", 
NULL}; 

BulletInfo *genBulletFunc_1a4f0f9051c90224583ea2ee0328c422(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_d1a40da8f09a671d734f789615730adf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_3cb1ba94939bdbf163296d42dbb74679(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1e8d8243eb8caebe9024a61f4e24face(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_9e187bb17853de9f9ca09e3cebf2061b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a3208acbe25ca1dc69200cdd305d13e5(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_5922aefce143aa74228e858b36d217eb(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_progear[] = { 
genBulletFunc_1a4f0f9051c90224583ea2ee0328c422, 
genBulletFunc_d1a40da8f09a671d734f789615730adf, 
genBulletFunc_3cb1ba94939bdbf163296d42dbb74679, 
genBulletFunc_1e8d8243eb8caebe9024a61f4e24face, 
genBulletFunc_9e187bb17853de9f9ca09e3cebf2061b, 
genBulletFunc_a3208acbe25ca1dc69200cdd305d13e5, 
genBulletFunc_5922aefce143aa74228e858b36d217eb, 
}; 

const char * const listBulletNames_progear[] = { 
" round_10_boss_before_final", 
" round_1_boss_grow_bullets", 
" round_2_boss_struggling", 
" round_3_boss_wave_bullets", 
" round_5_boss_last_round_wave", 
" round_5_middle_boss_rockets", 
" round_9_boss", 
NULL}; 

BulletInfo *genBulletFunc_1a84f72eaa318cfd5d74eeb460ef9528(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_96182ad433257a2dc7ee6908dde0e137(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_442ab43dc019e08224faee2a5eea1d4f(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_psyvariar[] = { 
genBulletFunc_1a84f72eaa318cfd5d74eeb460ef9528, 
genBulletFunc_96182ad433257a2dc7ee6908dde0e137, 
genBulletFunc_442ab43dc019e08224faee2a5eea1d4f, 
}; 

const char * const listBulletNames_psyvariar[] = { 
" 4-d_boss_mziq", 
" x-a_boss_opening", 
" x-a_boss_winder", 
NULL}; 

BulletInfo *genBulletFunc_69096391c0f6eb78af75bd6b5157a0b7(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_f387788edfc9249140b6967ac0cea520(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_seiho[] = { 
genBulletFunc_69096391c0f6eb78af75bd6b5157a0b7, 
genBulletFunc_f387788edfc9249140b6967ac0cea520, 
}; 

const char * const listBulletNames_seiho[] = { 
" syusogyoku_exreimu_3-1", 
" syusogyoku_exreimu_final", 
NULL}; 

BulletInfo *genBulletFunc_508fbbf6671cfb23be10374f7dd14e44(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6a9a362afe0c74add7155e2c7ec88d14(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_67c1260a0299b4d30c09d510bf8e5b72(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_cbb2485c549479ace97ad1f007e3c261(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_shinichiro_h[] = { 
genBulletFunc_508fbbf6671cfb23be10374f7dd14e44, 
genBulletFunc_6a9a362afe0c74add7155e2c7ec88d14, 
genBulletFunc_67c1260a0299b4d30c09d510bf8e5b72, 
genBulletFunc_cbb2485c549479ace97ad1f007e3c261, 
}; 

const char * const listBulletNames_shinichiro_h[] = { 
" original_bluff", 
" original_flower", 
" original_no_bluff", 
" original_uzuga", 
NULL}; 

BulletInfo *genBulletFunc_56d76ce12f2ca06802305dfc2fbeb68b(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_silvergun[] = { 
genBulletFunc_56d76ce12f2ca06802305dfc2fbeb68b, 
}; 

const char * const listBulletNames_silvergun[] = { 
" 4d_boss_penta", 
NULL}; 

BulletInfo *genBulletFunc_d024c9382ea72abb85f2859b0567d915(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_storm_calibar[] = { 
genBulletFunc_d024c9382ea72abb85f2859b0567d915, 
}; 

const char * const listBulletNames_storm_calibar[] = { 
" last_boss_double_roll_bullets", 
NULL}; 

BulletInfo *genBulletFunc_2faff4ec27af1267f0c4341c71d8875b(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_strikers1999[] = { 
genBulletFunc_2faff4ec27af1267f0c4341c71d8875b, 
}; 

const char * const listBulletNames_strikers1999[] = { 
" hanabi", 
NULL}; 

BulletInfo *genBulletFunc_a29e2ed441f0292c6cda969eb068d1c9(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a435c6cdf594f7c217f94708f09b96ab(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_bc97b36e7618e875067a450c5ac1bf70(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_tenmado[] = { 
genBulletFunc_a29e2ed441f0292c6cda969eb068d1c9, 
genBulletFunc_a435c6cdf594f7c217f94708f09b96ab, 
genBulletFunc_bc97b36e7618e875067a450c5ac1bf70, 
}; 

const char * const listBulletNames_tenmado[] = { 
" 3_boss_2", 
" 5_boss_1", 
" 5_boss_3", 
NULL}; 

BulletInfo *genBulletFunc_e0424b07b788197d9ebd2cce2c829cbf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b861b3aa367b0e8842df43a2feddbebc(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_toho[] = { 
genBulletFunc_e0424b07b788197d9ebd2cce2c829cbf, 
genBulletFunc_b861b3aa367b0e8842df43a2feddbebc, 
}; 

const char * const listBulletNames_toho[] = { 
" yomu-bungaku-nise", 
" youmu_hououtenshi_luna_modoki", 
NULL}; 

BulletInfo *genBulletFunc_2323474050d4c95521652f29feb0f2ca(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_b2d2c5f7e76d6e562299fc94e181a8e3(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_76b655990a807c8cb31949451a613ac1(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_39b604cc49f489de1c4790f4ddaf9acf(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_84e8ce8d744da8ad093cd25b4c16ad7e(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_512bd2d47e2d63815c6331187a317825(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_02e945b3473c54a6f615bd748a2aeb36(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_a051220f529246f970d81e57ca78de8b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_56d40ae4fd4c969c6e56c6c9e1689bfd(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_527038219911c40b4fdcc9fc9ff255f4(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_436d904e2f8c9f54423ff6e70872fe00(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_1b892ca9d73bd452b3235d6daeaf2296(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_31043cddbed559cdd29f10291fc6264b(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_4b13e3e2aef36227213f325bde42c602(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_63a444ea9d9c073df185a0d74a9a0f90(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_c3d1422c2ea8aa74fac400a2a82a9906(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_073f5b101558068b3acd6a2a1ebdc352(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_8d942a8715567ee885bfce7ec619dd31(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_43ebd0650ba15ba330e4551aa60ff315(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_6d1cbbe8e21c559d757b64883a9e9cb8(FixedPointNum, FixedPointNum); 
BulletInfo *genBulletFunc_e4655fcc5c261a69b93e2b18e47b18a5(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_user[] = { 
genBulletFunc_2323474050d4c95521652f29feb0f2ca, 
genBulletFunc_b2d2c5f7e76d6e562299fc94e181a8e3, 
genBulletFunc_76b655990a807c8cb31949451a613ac1, 
genBulletFunc_39b604cc49f489de1c4790f4ddaf9acf, 
genBulletFunc_84e8ce8d744da8ad093cd25b4c16ad7e, 
genBulletFunc_512bd2d47e2d63815c6331187a317825, 
genBulletFunc_02e945b3473c54a6f615bd748a2aeb36, 
genBulletFunc_a051220f529246f970d81e57ca78de8b, 
genBulletFunc_56d40ae4fd4c969c6e56c6c9e1689bfd, 
genBulletFunc_527038219911c40b4fdcc9fc9ff255f4, 
genBulletFunc_436d904e2f8c9f54423ff6e70872fe00, 
genBulletFunc_1b892ca9d73bd452b3235d6daeaf2296, 
genBulletFunc_31043cddbed559cdd29f10291fc6264b, 
genBulletFunc_4b13e3e2aef36227213f325bde42c602, 
genBulletFunc_63a444ea9d9c073df185a0d74a9a0f90, 
genBulletFunc_c3d1422c2ea8aa74fac400a2a82a9906, 
genBulletFunc_073f5b101558068b3acd6a2a1ebdc352, 
genBulletFunc_8d942a8715567ee885bfce7ec619dd31, 
genBulletFunc_43ebd0650ba15ba330e4551aa60ff315, 
genBulletFunc_6d1cbbe8e21c559d757b64883a9e9cb8, 
genBulletFunc_e4655fcc5c261a69b93e2b18e47b18a5, 
}; 

const char * const listBulletNames_user[] = { 
" 5way-hell", 
" danmaku-wall", 
" danmakuart_togenomaboroshi", 
" danmakuart_wing_of_phoenix", 
" espg2_4wehha_last", 
" espg2_5ikare_hidarite", 
" espg2_5keshitobe", 
" green_giant", 
" hunsui", 
" katam", 
" ketsui_4boss_pack", 
" ketsui_5middleboss_final", 
" ketsui_doom2", 
" ketsui_doom6", 
" ketsui_doom_final", 
" mou_test1", 
" notflower", 
" rr2", 
" senkoro_burstballa", 
" test", 
" tidoriasi", 
NULL}; 

BulletInfo *genBulletFunc_8ddd11cb82f96193b0f5dbb2f9b8af94(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_xevious[] = { 
genBulletFunc_8ddd11cb82f96193b0f5dbb2f9b8af94, 
}; 

const char * const listBulletNames_xevious[] = { 
" garu_zakato", 
NULL}; 

BulletInfo *genBulletFunc_adc968f7e8d7abd609ad00f9d8778e19(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_xii_stag[] = { 
genBulletFunc_adc968f7e8d7abd609ad00f9d8778e19, 
}; 

const char * const listBulletNames_xii_stag[] = { 
" 3b", 
NULL}; 

BulletInfo *genBulletFunc_e3d51671385b124c34cb9f2a090268a0(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_xin[] = { 
genBulletFunc_e3d51671385b124c34cb9f2a090268a0, 
}; 

const char * const listBulletNames_xin[] = { 
" 04b", 
NULL}; 

BulletInfo *genBulletFunc_858402347f4b1b834176a79b683729a8(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_xsoldier[] = { 
genBulletFunc_858402347f4b1b834176a79b683729a8, 
}; 

const char * const listBulletNames_xsoldier[] = { 
" 8_boss_main", 
NULL}; 

BulletInfo *genBulletFunc_c8ebc0fbca72784d2f6615308808faad(FixedPointNum, FixedPointNum); 

const BulletGenerateFunc listBulletFuncs_yutchi[] = { 
genBulletFunc_c8ebc0fbca72784d2f6615308808faad, 
}; 

const char * const listBulletNames_yutchi[] = { 
" ytbullet016", 
NULL}; 

const char * const listBulletGroups[] = {
" Bulletgba", 
" Bulletsmorph", 
" Bwda", 
" Daiouzyou", 
" Dodonpachi", 
" Dragonblaze", 
" Esp_galuda_lt", 
" Esp_rade", 
" G-wange", 
" G_darius", 
" Garegga", 
" Gigawing2", 
" Guwange", 
" Ketui_lt", 
" Kotuanzenx", 
" Mda", 
" Misc", 
" Noiz2sa", 
" Oohara", 
" Original", 
" Otakutwo", 
" Progear", 
" Psyvariar", 
" Seiho", 
" Shinichiro_h", 
" Silvergun", 
" Storm_calibar", 
" Strikers1999", 
" Tenmado", 
" Toho", 
" User", 
" Xevious", 
" Xii_stag", 
" Xin", 
" Xsoldier", 
" Yutchi", 
NULL}; 

const BulletGenerateFunc * const listBulletGroupsFuncs[] = {
listBulletFuncs_bulletgba, 
listBulletFuncs_bulletsmorph, 
listBulletFuncs_bwda, 
listBulletFuncs_daiouzyou, 
listBulletFuncs_dodonpachi, 
listBulletFuncs_dragonblaze, 
listBulletFuncs_esp_galuda_lt, 
listBulletFuncs_esp_rade, 
listBulletFuncs_g_wange, 
listBulletFuncs_g_darius, 
listBulletFuncs_garegga, 
listBulletFuncs_gigawing2, 
listBulletFuncs_guwange, 
listBulletFuncs_ketui_lt, 
listBulletFuncs_kotuanzenx, 
listBulletFuncs_mda, 
listBulletFuncs_misc, 
listBulletFuncs_noiz2sa, 
listBulletFuncs_oohara, 
listBulletFuncs_original, 
listBulletFuncs_otakutwo, 
listBulletFuncs_progear, 
listBulletFuncs_psyvariar, 
listBulletFuncs_seiho, 
listBulletFuncs_shinichiro_h, 
listBulletFuncs_silvergun, 
listBulletFuncs_storm_calibar, 
listBulletFuncs_strikers1999, 
listBulletFuncs_tenmado, 
listBulletFuncs_toho, 
listBulletFuncs_user, 
listBulletFuncs_xevious, 
listBulletFuncs_xii_stag, 
listBulletFuncs_xin, 
listBulletFuncs_xsoldier, 
listBulletFuncs_yutchi, 
}; 

const char * const * const listBulletGroupsNames[] = {
listBulletNames_bulletgba, 
listBulletNames_bulletsmorph, 
listBulletNames_bwda, 
listBulletNames_daiouzyou, 
listBulletNames_dodonpachi, 
listBulletNames_dragonblaze, 
listBulletNames_esp_galuda_lt, 
listBulletNames_esp_rade, 
listBulletNames_g_wange, 
listBulletNames_g_darius, 
listBulletNames_garegga, 
listBulletNames_gigawing2, 
listBulletNames_guwange, 
listBulletNames_ketui_lt, 
listBulletNames_kotuanzenx, 
listBulletNames_mda, 
listBulletNames_misc, 
listBulletNames_noiz2sa, 
listBulletNames_oohara, 
listBulletNames_original, 
listBulletNames_otakutwo, 
listBulletNames_progear, 
listBulletNames_psyvariar, 
listBulletNames_seiho, 
listBulletNames_shinichiro_h, 
listBulletNames_silvergun, 
listBulletNames_storm_calibar, 
listBulletNames_strikers1999, 
listBulletNames_tenmado, 
listBulletNames_toho, 
listBulletNames_user, 
listBulletNames_xevious, 
listBulletNames_xii_stag, 
listBulletNames_xin, 
listBulletNames_xsoldier, 
listBulletNames_yutchi, 
}; 

#endif
