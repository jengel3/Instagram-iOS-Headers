/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGRetroRegistrationPhoneNumberField, IGRetroRegistrationNextButton, IGCoreTextView, UIImageView, UILabel;

@interface IGRetroRegistrationPhoneNumberFrontView : UIView {

	UIButton* _switchToEmailRegiButton;
	IGRetroRegistrationPhoneNumberField* _phoneNumberField;
	IGRetroRegistrationNextButton* _nextButton;
	IGCoreTextView* _termView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIButton * switchToEmailRegiButton;                                  //@synthesize switchToEmailRegiButton=_switchToEmailRegiButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneNumberField * phoneNumberField;              //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;                          //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                           //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(IGCoreTextView *)termView;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(UIButton *)switchToEmailRegiButton;
-(IGRetroRegistrationPhoneNumberField *)phoneNumberField;
-(void)setSwitchToEmailRegiButton:(UIButton *)arg1 ;
-(void)setPhoneNumberField:(IGRetroRegistrationPhoneNumberField *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end
