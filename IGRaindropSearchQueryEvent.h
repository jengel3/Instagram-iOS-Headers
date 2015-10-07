/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:15 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString, NSMutableArray;

@interface IGRaindropSearchQueryEvent : TBaseStruct <TBase, NSCoding> {

	char __thrift_isTypeahead;
	char __thrift_nullState;
	NSString* __thrift_searchQueryText;
	long long __thrift_rttInMillis;
	long long __thrift_totalResults;
	long long __thrift_numberOfLocalResults;
	NSMutableArray* __thrift_impressions;
	char __thrift_isTypeahead_set;
	char __thrift_nullState_set;
	char __thrift_searchQueryText_set;
	char __thrift_rttInMillis_set;
	char __thrift_totalResults_set;
	char __thrift_numberOfLocalResults_set;
	char __thrift_impressions_set;

}

@property (assign,nonatomic) char isTypeahead; 
@property (assign,nonatomic) char nullState; 
@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) long long rttInMillis; 
@property (assign,nonatomic) long long totalResults; 
@property (assign,nonatomic) long long numberOfLocalResults; 
@property (nonatomic,retain) NSMutableArray * impressions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(long long)numberOfLocalResults;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setRttInMillis:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(char)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(long long)rttInMillis;
-(char)rttInMillisIsSet;
-(void)unsetRttInMillis;
-(void)setIsTypeahead:(char)arg1 ;
-(void)setNullState:(char)arg1 ;
-(char)isTypeahead;
-(char)isTypeaheadIsSet;
-(void)unsetIsTypeahead;
-(char)nullState;
-(char)nullStateIsSet;
-(void)unsetNullState;
-(void)setTotalResults:(long long)arg1 ;
-(void)setNumberOfLocalResults:(long long)arg1 ;
-(id)initWithIsTypeahead:(char)arg1 nullState:(char)arg2 searchQueryText:(id)arg3 rttInMillis:(long long)arg4 totalResults:(long long)arg5 numberOfLocalResults:(long long)arg6 impressions:(NSMutableArray*)arg7 ;
-(long long)totalResults;
-(char)totalResultsIsSet;
-(void)unsetTotalResults;
-(char)numberOfLocalResultsIsSet;
-(void)unsetNumberOfLocalResults;
-(char)impressionsIsSet;
-(void)unsetImpressions;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(void)setImpressions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)impressions;
@end

