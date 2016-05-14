/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGGenericMegaphoneViewV2Delegate;
@class IGGenericMegaphone, UIImage, UILabel, IGImageView, UIButton, UIView, NSString;

@interface IGGenericMegaphoneViewV2 : UIView <IGImageViewDelegate> {

	char _megaphoneSeen;
	IGGenericMegaphone* _megaphone;
	UIImage* _megaphoneImage;
	id<IGGenericMegaphoneViewV2Delegate> _delegate;
	UILabel* _titleView;
	UILabel* _messageView;
	IGImageView* _imageView;
	UIButton* _dismissButton;
	UIView* _lineView;
	UIButton* _buttonOne;
	UIButton* _buttonTwo;
	NSString* _displaySource;

}

@property (nonatomic,retain) UILabel * titleView;                                               //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * messageView;                                             //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) IGImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                 //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIButton * buttonOne;                                              //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) UIButton * buttonTwo;                                              //@synthesize buttonTwo=_buttonTwo - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                                //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
@property (nonatomic,copy) NSString * displaySource;                                            //@synthesize displaySource=_displaySource - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                    //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,retain) UIImage * megaphoneImage;                                          //@synthesize megaphoneImage=_megaphoneImage - In the implementation block
@property (assign,nonatomic,__weak) id<IGGenericMegaphoneViewV2Delegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(void)setLineView:(UIView *)arg1 ;
-(UILabel *)messageView;
-(void)setMessageView:(UILabel *)arg1 ;
-(NSString *)displaySource;
-(id)createDismissButton;
-(id)initWithMegaphone:(id)arg1 ;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(UIButton *)buttonOne;
-(UIButton *)buttonTwo;
-(id)createTitleView;
-(id)createMessageView;
-(id)createMegaphoneImageView;
-(id)createButtonOne;
-(id)createButtonTwo;
-(void)layoutImageView;
-(void)layoutTextView;
-(void)layoutDismissButton;
-(void)layoutButtons;
-(char)megaphoneHasImage;
-(UIImage *)megaphoneImage;
-(id)createButtonForMegaphoneButton:(id)arg1 ;
-(void)didSelectButtonOne;
-(void)didSelectButtonTwo;
-(void)didDismiss;
-(void)setMegaphoneImage:(UIImage *)arg1 ;
-(void)setButtonOne:(UIButton *)arg1 ;
-(void)setButtonTwo:(UIButton *)arg1 ;
-(void)setDisplaySource:(NSString *)arg1 ;
-(void)setDelegate:(id<IGGenericMegaphoneViewV2Delegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGenericMegaphoneViewV2Delegate>)delegate;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(IGImageView *)imageView;
-(void)setImageView:(IGImageView *)arg1 ;
-(UIView *)lineView;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
@end
