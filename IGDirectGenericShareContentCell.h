
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class UIView, IGCoreTextView, UILabel, UIImageView, IGShareThumbnailView, NSArray;

@interface IGDirectGenericShareContentCell : IGDirectContentCell {

	UIView* _shareContainerView;
	IGCoreTextView* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _sideImageView;
	UIImageView* _chevronView;
	IGShareThumbnailView* _thumbnailViews;
	NSArray* _previewMediaPhotos;

}

@property (nonatomic,retain) UIView * shareContainerView;                        //@synthesize shareContainerView=_shareContainerView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * sideImageView;                        //@synthesize sideImageView=_sideImageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                          //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) IGShareThumbnailView * thumbnailViews;              //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) NSArray * previewMediaPhotos;                       //@synthesize previewMediaPhotos=_previewMediaPhotos - In the implementation block
+(float)heightForCellWithTitleText:(id)arg1 andSubtitleText:(id)arg2 andWidth:(float)arg3 andThumbnails:(id)arg4 ;
+(float)sideImageWidth;
+(float)labelWidthForFrameWidth:(float)arg1 ;
+(id)titleStyledStringWithText:(id)arg1 ;
+(float)thumbnailWidthForFrameWidth:(float)arg1 ;
+(float)cellWidthForFrameWidth:(float)arg1 ;
-(id)defaultBackgroundImage;
-(id)highlightedBackgroundImage;
-(id)previewMedia;
-(CGRect)tapTargetFrame;
-(id)createShareContainerView;
-(void)setShareContainerView:(UIView *)arg1 ;
-(UIView *)shareContainerView;
-(UIImageView *)sideImageView;
-(IGShareThumbnailView *)thumbnailViews;
-(NSArray *)previewMediaPhotos;
-(void)setPreviewMediaPhotos:(NSArray *)arg1 ;
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

