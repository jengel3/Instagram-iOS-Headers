/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:55 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class IGCoreTextView, UILabel, UIImageView, IGShareThumbnailView, NSArray;

@interface IGDirectGenericShareContentCell : IGDirectContentCell {

	IGCoreTextView* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _sideImageView;
	UIImageView* _chevronView;
	IGShareThumbnailView* _thumbnailViews;
	NSArray* _previewMediaPhotos;

}

@property (nonatomic,retain) IGCoreTextView * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                        //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                          //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) IGShareThumbnailView * thumbnailViews;              //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) NSArray * previewMediaPhotos;                       //@synthesize previewMediaPhotos=_previewMediaPhotos - In the implementation block
+(float)labelWidthForFrameWidth:(float)arg1 ;
+(id)titleStyledStringWithText:(id)arg1 ;
+(float)thumbnailWidthForFrameWidth:(float)arg1 ;
+(float)cellWidthForFrameWidth:(float)arg1 ;
+(float)sideImageWidth;
+(float)heightForCellWithTitleText:(id)arg1 andSubtitleText:(id)arg2 andWidth:(float)arg3 andThumbnails:(id)arg4 ;
+(id)subtitleStyledStringWithText:(id)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(id)previewMedia;
-(CGRect)tapTargetFrame;
-(UIImageView *)sideImageView;
-(IGShareThumbnailView *)thumbnailViews;
-(NSArray *)previewMediaPhotos;
-(void)setPreviewMediaPhotos:(NSArray *)arg1 ;
-(void)setSideImageView:(UIImageView *)arg1 ;
-(void)setThumbnailViews:(IGShareThumbnailView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGCoreTextView *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(IGCoreTextView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

