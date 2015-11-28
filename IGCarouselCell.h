
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGCarouselCellCascadeDataSource;
@class IGMediaThumbnailView, UILabel, UIView;

@interface IGCarouselCell : UICollectionViewCell {

	char _isLabelPaddingAdded;
	id<IGCarouselCellCascadeDataSource> _datasource;
	IGMediaThumbnailView* _imageView;
	UILabel* _titleLabel;
	UIView* _overlayView;

}

@property (assign,nonatomic,__weak) id<IGCarouselCellCascadeDataSource> datasource;              //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) IGMediaThumbnailView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char isLabelPaddingAdded;                                           //@synthesize isLabelPaddingAdded=_isLabelPaddingAdded - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                               //@synthesize overlayView=_overlayView - In the implementation block
-(void)setImageBorderVisible:(char)arg1 ;
-(void)setIsLabelPaddingAdded:(char)arg1 ;
-(char)isLabelPaddingAdded;
-(void)configureWithViewModel:(id)arg1 ;
-(void)setVideoIconVisible:(char)arg1 ;
-(void)nextCascadingImageAfterDelay:(double)arg1 ;
-(void)setDatasource:(id<IGCarouselCellCascadeDataSource>)arg1 ;
-(id<IGCarouselCellCascadeDataSource>)datasource;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityLabel;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(IGMediaThumbnailView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(IGMediaThumbnailView *)arg1 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

