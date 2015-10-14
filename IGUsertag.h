/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCoding.h>
#import <Instagram/NSCopying.h>

@class IGUser, IGUsertagGroup;

@interface IGUsertag : NSObject <NSCoding, NSCopying> {

	IGUser* _user;
	IGUsertagGroup* _group;
	CGPoint _position;
	CGRect _faceRect;

}

@property (nonatomic,readonly) IGUser * user;                            //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) CGPoint position;                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect faceRect;                            //@synthesize faceRect=_faceRect - In the implementation block
@property (assign,nonatomic,__weak) IGUsertagGroup * group;              //@synthesize group=_group - In the implementation block
+(id)inTagWithUser:(id)arg1 atPosition:(CGPoint)arg2 ;
+(id)inTagFromDictionary:(id)arg1 ;
-(id)initWithUser:(id)arg1 position:(CGPoint)arg2 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setGroup:(IGUsertagGroup *)arg1 ;
-(IGUsertagGroup *)group;
-(IGUser *)user;
-(id)asDictionary;
@end

