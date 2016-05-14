/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGViewControllerTitleDetailTitleView : UIView {

	UILabel* _title;
	UILabel* _detail;

}

@property (nonatomic,retain) UILabel * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * detail;              //@synthesize detail=_detail - In the implementation block
-(void)updateTitle:(id)arg1 ;
-(void)updateDetail:(id)arg1 ;
-(float)centerOffsetFromContainingNavigationBar;
-(UILabel *)detail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)title;
-(void)setDetail:(UILabel *)arg1 ;
-(void)setColorScheme:(unsigned)arg1 ;
@end
