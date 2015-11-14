/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:06 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Instagram/IGTextFieldDelegate.h>

@class UIButton, IGTextField, IGCoreTextView, UIImageView, UILabel, NSString;

@interface IGRetroRegistrationSMSVerificationScrollView : UIScrollView <IGTextFieldDelegate> {

	UIButton* _nextButton;
	IGTextField* _codeField;
	IGCoreTextView* _accessView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIButton * nextButton;                    //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGTextField * codeField;                  //@synthesize codeField=_codeField - In the implementation block
@property (nonatomic,retain) IGCoreTextView * accessView;              //@synthesize accessView=_accessView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                   //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGTextField *)codeField;
-(IGCoreTextView *)accessView;
-(void)updateDescriptionWithPhoneNumber:(id)arg1 ;
-(void)setCodeField:(IGTextField *)arg1 ;
-(void)setAccessView:(IGCoreTextView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end
