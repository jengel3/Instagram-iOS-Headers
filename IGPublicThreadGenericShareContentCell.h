/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentCell.h>

@class UIView, IGCoreTextView, UILabel, UIImageView, IGShareThumbnailView;

@interface IGPublicThreadGenericShareContentCell : IGPublicThreadContentCell {

	UIView* _shareContainerView;
	IGCoreTextView* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _sideImageView;
	UIImageView* _chevronView;
	IGShareThumbnailView* _thumbnailViews;

}

@property (nonatomic,retain) IGCoreTextView * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                        //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                          //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) IGShareThumbnailView * thumbnailViews;              //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) UIView * shareContainerView;                        //@synthesize shareContainerView=_shareContainerView - In the implementation block
+(float)heightForCellWithTitleText:(id)arg1 andSubtitleText:(id)arg2 andWidth:(float)arg3 andThumbnails:(id)arg4 ;
+(float)sideImageWidth;
+(float)sideImageHeight;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
+(float)labelWidthForFrameWidth:(float)arg1 ;
+(id)titleStyledStringWithText:(id)arg1 ;
+(float)thumbnailWidthForFrameWidth:(float)arg1 ;
+(float)cellWidthForFrameWidth:(float)arg1 ;
-(id)defaultBackgroundImage;
-(id)highlightedBackgroundImage;
-(id)previewMedia;
-(CGRect)tapTargetFrame;
-(char)hasEnoughThumbnailsForDisplaying:(id)arg1 ;
-(id)createShareContainerView;
-(void)setShareContainerView:(UIView *)arg1 ;
-(UIView *)shareContainerView;
-(UIImageView *)sideImageView;
-(IGShareThumbnailView *)thumbnailViews;
-(void)setPreviewMediaPhotos:(id)arg1 ;
-(id)defaultBackgoundImageForSameUser;
-(id)defaultBackgoundImageNotForSameUser;
-(id)highlightedBackgoundImageForSameUser;
-(id)highlightedBackgoundImageNotForSameUser;
-(void)setSideImageView:(UIImageView *)arg1 ;
-(void)setThumbnailViews:(IGShareThumbnailView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(IGCoreTextView *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(IGCoreTextView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end
