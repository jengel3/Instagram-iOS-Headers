/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IGAdsInlineInsightsModel : NSObject {

	float _impressionCount;
	float _websiteClickCount;
	NSString* _spentFormattedString;
	NSString* _budgetFormattedString;
	NSString* _costPerClick;
	float _percentage;
	NSString* _timeRemaining;

}

@property (nonatomic,readonly) float impressionCount;                              //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) float websiteClickCount;                            //@synthesize websiteClickCount=_websiteClickCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * spentFormattedString;               //@synthesize spentFormattedString=_spentFormattedString - In the implementation block
@property (nonatomic,copy,readonly) NSString * budgetFormattedString;              //@synthesize budgetFormattedString=_budgetFormattedString - In the implementation block
@property (nonatomic,copy,readonly) NSString * costPerClick;                       //@synthesize costPerClick=_costPerClick - In the implementation block
@property (nonatomic,readonly) float percentage;                                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeRemaining;                      //@synthesize timeRemaining=_timeRemaining - In the implementation block
-(float)impressionCount;
-(id)initWithImpressionCount:(float)arg1 websiteClickCount:(float)arg2 spentFormattedString:(id)arg3 budgetFormattedString:(id)arg4 costPerClick:(id)arg5 percentage:(float)arg6 timeRemaining:(id)arg7 ;
-(float)websiteClickCount;
-(NSString *)spentFormattedString;
-(NSString *)budgetFormattedString;
-(NSString *)costPerClick;
-(float)percentage;
-(NSString *)timeRemaining;
@end
