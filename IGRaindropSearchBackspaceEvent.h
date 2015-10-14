/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString;

@interface IGRaindropSearchBackspaceEvent : TBaseStruct <TBase, NSCoding> {

	char __thrift_isTypeahead;
	NSString* __thrift_searchQueryText;
	long long __thrift_rttInMillis;
	char __thrift_isTypeahead_set;
	char __thrift_searchQueryText_set;
	char __thrift_rttInMillis_set;

}

@property (assign,nonatomic) char isTypeahead; 
@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) long long rttInMillis; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
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
-(char)isTypeahead;
-(char)isTypeaheadIsSet;
-(void)unsetIsTypeahead;
-(id)initWithIsTypeahead:(char)arg1 searchQueryText:(id)arg2 rttInMillis:(long long)arg3 ;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

