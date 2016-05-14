/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDKDiffable.h>
#import <Instagram/IGFeedItemProtocol.h>

@class NSArray, NSString;

@interface IGHScrollAYMFModel : NSObject <IGDKDiffable, IGFeedItemProtocol> {

	NSArray* _userInfos;
	NSString* _title;
	NSString* _actionText;
	NSString* _uuid;

}

@property (nonatomic,readonly) NSArray * userInfos;                     //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diffIdentifier;
-(NSString *)actionText;
-(id)initWithAYMFDict:(id)arg1 ;
-(unsigned)feedItemType;
-(id)itemId;
-(NSString *)title;
-(NSString *)uuid;
-(NSArray *)userInfos;
@end
