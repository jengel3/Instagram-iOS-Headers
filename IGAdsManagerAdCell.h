/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class IGAdViewModel, UILabel, IGMediaThumbnailView, UIImageView;

@interface IGAdsManagerAdCell : UITableViewCell {

	IGAdViewModel* _viewModel;
	UILabel* _title;
	UILabel* _subtitle;
	IGMediaThumbnailView* _thumbnailView;
	UIImageView* _rightArrow;

}

@property (nonatomic,readonly) UILabel * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                          //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,retain) IGAdViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
-(void)setUpSubtitle;
-(void)setUpThumbnailView;
-(float)topBottomMarginWithTitleSize:(CGSize)arg1 subtitleSize:(CGSize)arg2 ;
-(CGRect)layoutForTitleWithThumbnailRect:(CGRect)arg1 topMargin:(float)arg2 ;
-(CGRect)layoutForSubtitleWithThumbnailRect:(CGRect)arg1 bottomMargin:(float)arg2 ;
-(CGRect)layoutForThumbnail;
-(void)setUpRightArrow;
-(void)setUpViewHierarchy;
-(void)setUpTitle;
-(UIImageView *)rightArrow;
-(IGAdViewModel *)viewModel;
-(void)setViewModel:(IGAdViewModel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)title;
-(UILabel *)subtitle;
-(IGMediaThumbnailView *)thumbnailView;
@end
