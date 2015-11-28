
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
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
@end

