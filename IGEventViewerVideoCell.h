
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVideoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@class UIActivityIndicatorView, UIProgressView, IGBlurredImageView, NSString;

@interface IGEventViewerVideoCell : IGFeedItemVideoCell <IGEventViewerCellType> {

	UIActivityIndicatorView* _spinner;
	UIProgressView* _progressView;
	IGBlurredImageView* _blurredImageView;

}

@property (nonatomic,__weak,readonly) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                         //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;                 //@synthesize blurredImageView=_blurredImageView - In the implementation block
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
-(UIActivityIndicatorView *)spinner;
@end

