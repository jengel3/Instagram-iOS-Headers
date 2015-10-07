/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView;

@interface IGBannerView : UIButton {

	UILabel* _textLabel;
	UILabel* _disclosureLabel;
	UIImageView* _disclosureIndicator;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _disclosureLabelInsets;

}

@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLabel;                       //@synthesize disclosureLabel=_disclosureLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureIndicator;               //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                      //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets disclosureLabelInsets;              //@synthesize disclosureLabelInsets=_disclosureLabelInsets - In the implementation block
-(UILabel *)disclosureLabel;
-(UIImageView *)disclosureIndicator;
-(UIEdgeInsets)disclosureLabelInsets;
-(void)setDisclosureLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setDisclosureLabel:(UILabel *)arg1 ;
-(void)setDisclosureIndicator:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

