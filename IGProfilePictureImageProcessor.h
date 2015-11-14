/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class NSString;

@interface IGProfilePictureImageProcessor : NSObject <IGImageProcessor> {

	int _borderStyle;

}

@property (assign,nonatomic) int borderStyle;                       //@synthesize borderStyle=_borderStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageProcessorWithBorderStyle:(int)arg1 ;
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)initWithBorderStyle:(int)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(id)borderColor;
-(float)borderWidth;
-(int)borderStyle;
@end
