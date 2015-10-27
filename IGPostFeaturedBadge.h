/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface IGPostFeaturedBadge : NSObject <NSCoding> {

	NSString* _title;
	NSURL* _url;
	NSString* _imageName;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
-(id)initWithTitle:(id)arg1 url:(id)arg2 imageName:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)imageName;
@end

