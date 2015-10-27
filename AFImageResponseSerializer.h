/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@interface AFImageResponseSerializer : AFHTTPResponseSerializer {

	char _automaticallyInflatesResponseImage;
	float _imageScale;

}

@property (assign,nonatomic) float imageScale;                                     //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,nonatomic) char automaticallyInflatesResponseImage;              //@synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage - In the implementation block
+(id)acceptablePathExtensions;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setAutomaticallyInflatesResponseImage:(char)arg1 ;
-(char)automaticallyInflatesResponseImage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageScale:(float)arg1 ;
-(float)imageScale;
@end

