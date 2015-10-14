/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:52 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, IGSimpleButton;

@interface IGCameraLibraryButton : UIView {

	int _assetType;
	UIImageView* _imageView;
	IGSimpleButton* _button;

}

@property (assign,nonatomic) char enabled; 
@property (assign,nonatomic) int assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGSimpleButton * button;              //@synthesize button=_button - In the implementation block
-(void)setImageToLastLibraryImage;
-(IGSimpleButton *)button;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(UIImageView *)imageView;
-(char)enabled;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithAssetType:(int)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setButton:(IGSimpleButton *)arg1 ;
-(void)setAssetType:(int)arg1 ;
-(int)assetType;
@end

