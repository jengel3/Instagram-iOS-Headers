/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface IGRetroRegistrationUsernameActionView : UIView {

	UIButton* _validationButton;
	UIButton* _refreshButton;
	UIView* _lineSeparatorView;

}

@property (nonatomic,retain) UIButton * validationButton;              //@synthesize validationButton=_validationButton - In the implementation block
@property (nonatomic,retain) UIButton * refreshButton;                 //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIView * lineSeparatorView;               //@synthesize lineSeparatorView=_lineSeparatorView - In the implementation block
-(void)setUsernameFieldIsValid:(char)arg1 ;
-(void)setFreshButtonIsValid:(char)arg1 ;
-(void)resetUsernameField;
-(UIView *)lineSeparatorView;
-(UIButton *)validationButton;
-(void)setValidationButton:(UIButton *)arg1 ;
-(void)setLineSeparatorView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRefreshButton:(UIButton *)arg1 ;
-(UIButton *)refreshButton;
@end

