/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGTableViewCell.h>

@class IGProfilePictureImageView, UIView;

@interface IGExpandableHeaderCell : IGTableViewCell {

	char _expanded;
	IGProfilePictureImageView* _profilePictureView;
	UIView* _triangleIndicator;
	UIView* _bottomLineView;
	UIView* _downArrow;

}

@property (assign,getter=isExpanded,nonatomic) char expanded;                             //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;              //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UIView * triangleIndicator;                                  //@synthesize triangleIndicator=_triangleIndicator - In the implementation block
@property (nonatomic,retain) UIView * bottomLineView;                                     //@synthesize bottomLineView=_bottomLineView - In the implementation block
@property (nonatomic,retain) UIView * downArrow;                                          //@synthesize downArrow=_downArrow - In the implementation block
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(void)setBottomLineView:(UIView *)arg1 ;
-(UIView *)bottomLineView;
-(UIView *)triangleIndicator;
-(UIView *)downArrow;
-(void)setTriangleIndicator:(UIView *)arg1 ;
-(void)setDownArrow:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
@end

