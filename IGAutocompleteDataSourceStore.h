/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSMutableDictionary;

@interface IGAutocompleteDataSourceStore : NSObject {

	NSArray* _currentResults;
	NSString* _lastQuery;
	NSMutableDictionary* _pastResults;

}

@property (nonatomic,retain) NSArray * currentResults;                       //@synthesize currentResults=_currentResults - In the implementation block
@property (nonatomic,copy) NSString * lastQuery;                             //@synthesize lastQuery=_lastQuery - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pastResults;              //@synthesize pastResults=_pastResults - In the implementation block
-(void)setCurrentResults:(NSArray *)arg1 ;
-(NSMutableDictionary *)pastResults;
-(void)currentResults:(id)arg1 forQuery:(id)arg2 ;
-(void)setPastResults:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSArray *)currentResults;
-(NSString *)lastQuery;
-(void)setLastQuery:(NSString *)arg1 ;
-(void)clearResults;
@end
