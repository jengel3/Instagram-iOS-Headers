/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class NSString;

@interface IGAuthenticatedUser : NSObject <NSCoding> {

	char _isPrivate;
	NSString* _pk;
	NSString* _username;
	NSString* _profilePicURL;
	NSString* _fullName;

}

@property (copy) NSString * pk;                         //@synthesize pk=_pk - In the implementation block
@property (copy) NSString * username;                   //@synthesize username=_username - In the implementation block
@property (copy) NSString * profilePicURL;              //@synthesize profilePicURL=_profilePicURL - In the implementation block
@property (copy) NSString * fullName;                   //@synthesize fullName=_fullName - In the implementation block
@property (assign) char isPrivate;                      //@synthesize isPrivate=_isPrivate - In the implementation block
-(NSString *)pk;
-(id)toDict;
-(NSString *)profilePicURL;
-(void)setPk:(NSString *)arg1 ;
-(void)setIsPrivate:(char)arg1 ;
-(void)setProfilePicURL:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)username;
-(char)isPrivate;
@end

