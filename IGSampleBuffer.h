/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSDictionary;

@interface IGSampleBuffer : NSObject {

	CVBufferRef _imageBuffer;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) CVBufferRef imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) CGSize size; 
-(id)initWithImageBuffer:(CVBufferRef)arg1 metadata:(id)arg2 ;
-(id)initWithImageBuffer:(CVBufferRef)arg1 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(NSDictionary *)metadata;
-(CVBufferRef)imageBuffer;
@end

