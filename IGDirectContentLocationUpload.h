/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectContentUpload.h>
#import <Instagram/NSCoding.h>

@class IGLocation;

@interface IGDirectContentLocationUpload : IGDirectContentUpload <NSCoding> {

	IGLocation* _location;

}

@property (nonatomic,retain) IGLocation * location;              //@synthesize location=_location - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(id)contentType;
@end

