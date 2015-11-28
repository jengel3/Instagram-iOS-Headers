
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemPhotoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@class UIProgressView, IGBlurredImageView, NSString;

@interface IGEventViewerPhotoCell : IGFeedItemPhotoCell <IGEventViewerCellType> {

	UIProgressView* _progressView;
	IGBlurredImageView* _blurredImageView;

}

@property (nonatomic,readonly) UIProgressView * progressView;                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;              //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(id)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(void)setShadowHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIProgressView *)progressView;
@end

