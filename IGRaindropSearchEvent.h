/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGRaindropSearchEvent : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_searchQueryText;
	char __thrift_wasSearchButtonTaped;
	int __thrift_searchType;
	long long __thrift_rttInMillis;
	char __thrift_searchQueryText_set;
	char __thrift_wasSearchButtonTaped_set;
	char __thrift_searchType_set;
	char __thrift_rttInMillis_set;

}

@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) char wasSearchButtonTaped; 
@property (assign,nonatomic) int searchType; 
@property (assign,nonatomic) long long rttInMillis; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setRttInMillis:(long long)arg1 ;
-(void)setWasSearchButtonTaped:(char)arg1 ;
-(void)read:(id)arg1 ;
-(char)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(long long)rttInMillis;
-(char)rttInMillisIsSet;
-(void)unsetRttInMillis;
-(char)searchTypeIsSet;
-(void)unsetSearchType;
-(id)initWithSearchQueryText:(id)arg1 wasSearchButtonTaped:(char)arg2 searchType:(int)arg3 rttInMillis:(long long)arg4 ;
-(char)wasSearchButtonTaped;
-(char)wasSearchButtonTapedIsSet;
-(void)unsetWasSearchButtonTaped;
-(char)makeImmutable;
-(void)setSearchType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
-(int)searchType;
@end

