/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBSessionTokenCachingStrategy.h>

@class NSString, NSDate;

@interface FBSessionManualTokenCachingStrategy : FBSessionTokenCachingStrategy {

	NSString* _accessToken;
	NSDate* _expirationDate;

}

@property (copy) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)clearToken;
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(void)dealloc;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end

