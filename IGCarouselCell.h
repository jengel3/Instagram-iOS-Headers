
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGMediaThumbnailView, UILabel, CALayer;

@interface IGCarouselCell : UICollectionViewCell {

	char _isLabelPaddingAdded;
	IGMediaThumbnailView* _imageView;
	UILabel* _titleLabel;
	CALayer* _touchDownLayer;

}

@property (nonatomic,retain) IGMediaThumbnailView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char isLabelPaddingAdded;                      //@synthesize isLabelPaddingAdded=_isLabelPaddingAdded - In the implementation block
@property (nonatomic,retain) CALayer * touchDownLayer;                      //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
-(void)setImageBorderVisible:(char)arg1 ;
-(CALayer *)touchDownLayer;
-(void)setIsLabelPaddingAdded:(char)arg1 ;
-(char)isLabelPaddingAdded;
-(void)configureWithViewModel:(id)arg1 ;
-(void)setVideoIconVisible:(char)arg1 ;
-(void)setTouchDownLayer:(CALayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(IGMediaThumbnailView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(IGMediaThumbnailView *)arg1 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
@end

