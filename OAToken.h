/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class NSString, NSNumber, NSMutableDictionary, NSDate, NSDictionary;

@interface OAToken : NSObject <NSCoding> {

	NSString* key;
	NSString* secret;
	NSString* session;
	NSNumber* duration;
	NSMutableDictionary* attributes;
	NSDate* created;
	char renewable;
	char forRenewal;
	NSString* verifier;

}

@property (retain) NSString * key; 
@property (retain) NSString * secret; 
@property (retain) NSString * session; 
@property (retain) NSNumber * duration; 
@property (retain) NSString * verifier; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (getter=isForRenewal) char forRenewal; 
+(id)durationWithString:(id)arg1 ;
+(id)attributesWithString:(id)arg1 ;
+(id)loadSetting:(id)arg1 provider:(id)arg2 prefix:(id)arg3 ;
+(void)saveSetting:(id)arg1 object:(id)arg2 provider:(id)arg3 prefix:(id)arg4 ;
+(id)settingsKey:(id)arg1 provider:(id)arg2 prefix:(id)arg3 ;
+(void)removeFromUserDefaultsWithServiceProviderName:(id)arg1 prefix:(id)arg2 ;
-(id)initWithKey:(id)arg1 secret:(id)arg2 ;
-(id)initWithHTTPResponseBody:(id)arg1 ;
-(id)initWithKey:(id)arg1 secret:(id)arg2 session:(id)arg3 duration:(id)arg4 attributes:(id)arg5 created:(id)arg6 renewable:(char)arg7 ;
-(void)setVerifier:(NSString *)arg1 ;
-(NSString *)verifier;
-(char)isForRenewal;
-(id)attributeString;
-(char)isEqualToToken:(id)arg1 ;
-(id)initWithUserDefaultsUsingServiceProviderName:(id)arg1 prefix:(id)arg2 ;
-(int)storeInUserDefaultsWithServiceProviderName:(id)arg1 prefix:(id)arg2 ;
-(void)setDurationWithString:(id)arg1 ;
-(char)isRenewable;
-(id)attribute:(id)arg1 ;
-(void)setAttributesWithString:(id)arg1 ;
-(void)setForRenewal:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSNumber *)duration;
-(NSString *)key;
-(void)setDuration:(NSNumber *)arg1 ;
-(char)isValid;
-(void)setAttribute:(id)arg1 value:(id)arg2 ;
-(void)setKey:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)hasExpired;
-(NSString *)session;
-(void)setSession:(NSString *)arg1 ;
-(id)parameters;
-(NSString *)secret;
-(void)setSecret:(NSString *)arg1 ;
-(char)hasAttributes;
@end

