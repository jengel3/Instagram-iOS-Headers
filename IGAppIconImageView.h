/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class UIImage;

@interface IGAppIconImageView : IGImageView {

	unsigned _imageRenderTicker;
	UIImage* _originalImage;

}

@property (assign,nonatomic) unsigned imageRenderTicker;              //@synthesize imageRenderTicker=_imageRenderTicker - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                 //@synthesize originalImage=_originalImage - In the implementation block
-(void)reloadClippedImageWithImage:(id)arg1 ;
-(unsigned)imageRenderTicker;
-(void)setImageRenderTicker:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)originalImage;
@end

