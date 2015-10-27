/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSOrderedSet;

@interface IGSearchCacheEntry : NSObject {

	NSString* _queryString;
	NSDictionary* _additionalParams;
	NSOrderedSet* _suggestions;
	unsigned _state;
	NSString* _rankToken;
	NSOrderedSet* _localSuggestions;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,copy,readonly) NSString * queryString;                //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalParams;              //@synthesize additionalParams=_additionalParams - In the implementation block
@property (nonatomic,retain) NSOrderedSet * suggestions;                   //@synthesize suggestions=_suggestions - In the implementation block
@property (assign) unsigned state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                           //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,retain) NSOrderedSet * localSuggestions;              //@synthesize localSuggestions=_localSuggestions - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                 //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
-(NSDictionary *)additionalParams;
-(id)initWithQueryString:(id)arg1 additionalParams:(id)arg2 ;
-(char)isEqualToQueryString:(id)arg1 additionalParams:(id)arg2 ;
-(void)setAdditionalParams:(NSDictionary *)arg1 ;
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(NSOrderedSet *)localSuggestions;
-(void)setLocalSuggestions:(NSOrderedSet *)arg1 ;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)queryString;
-(void)setSuggestions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)suggestions;
@end

