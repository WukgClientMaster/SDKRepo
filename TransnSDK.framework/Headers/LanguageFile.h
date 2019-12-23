/*!
 *   LanguageFile.h
 *   TransnSDK
 *
 *   Created by 姜政 on 2017/8/8.
 *   Copyright © 2018年 Transn. All rights reserved.
 *
 */
#import <Foundation/Foundation.h>

/*!
 *  语种ID，包含国内少数民族语种，不是所有的语种都支持，
 */
typedef NS_ENUM (NSInteger, langIdType) {
    ///中文
    LangChina = 1,
    ///英文
    LangEnglish = 2,
    ///日语
    LangJapanese = 3,
    ///法语
    LangFrench = 4,
    ///德语
    LangGerman = 5,
    ///俄语
    LangRussian = 6,
    ///韩语
    LangKorea = 7,
    ///繁体中文
    LangTraditionalChinese = 8,
    ///荷兰
    LangDutch = 9,
    ///意大利
    LangItalian = 10,
    ///西班牙
    LangSpanish = 11,
    ///葡萄牙语
    LangPortuguese = 12,
    ///阿拉伯语
    LangArabic = 13,
    ///土耳其
    LangTurkish = 14,
    ///新疆维吾尔语
    LangUyghur = 15,
    ///波斯
    LangPersian = 16,
    ///蒙语
    LangMongolian = 17,
    ///印度尼西亚
    LangIndonesian = 18,
    ///马来语
    LangMalay = 19,
    ///泰语
    LangThai = 20,
    ///越南
    LangVietnamese = 21,
    ///老挝
    LangLaotian = 22,
    ///印度
    LangIndian = 23,
    ///孟加拉
    LangBengali = 24,
    ///柬埔寨
    LangCambodian = 25,
    ///尼泊尔
    LangNepali = 26,
    ///乌克兰
    LangUkrainian = 27,
    ///丹麦语
    LangDenish = 28,
    ///挪威
    LangNorwegian = 29,
    ///芬兰
    LangFinnish = 30,
    ///希腊
    LangGreek = 31,
    ///波兰
    LangPolish = 32,
    ///罗马尼亚
    LangRomanian = 33,
    ///保加利亚
    LangBulgarian = 34,
    ///捷克
    LangCzech = 35,
    ///斯洛伐克
    LangSlovak = 36,
    ///匈牙利
    LangHungarian = 37,
    ///拉丁语
    LangLatin = 38,
    ///希伯莱语
    LangRabbinic = 39,
    ///依地语
    LangYiddish = 40,
    ///瑞典
    LangSwedish = 41,
    ///克罗地亚
    LangCroatian = 42,
    ///阿尔巴尼亚
    LangAlbanian = 43,
    ///缅甸语
    LangMyanmese = 44,
    ///台湾话
    LangTaiwan = 45,
    ///香港
    LangHongKong = 46,
    ///朝鲜
    LangKorean = 47,
    ///菲律宾
    LangTagalog = 48,
    ///哈萨克
    LangKazakh = 49,
    ///苗语
    LangHmong = 50,
    ///高棉语
    LangKhmer = 51,
    ///索马里
    LangSomali = 52,
    ///塞尔维亚
    LangSerbian = 53,
    ///乌兹别克
    LangUzbek = 54,
    ///巴西
    LangBrazil = 57,
    ///其它
    LangOther = 99,
};

@interface LanguageFile : NSObject

///通过语种ID获取汉字
+ (NSString *)getLangNameWithLangID:(NSString *)langId;
@end
